/***************************************************************
 * Name:      aiCamClientAppApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Kevin Todd Cantrell (Kevin@CropWatch.io)
 * Created:   2022-09-13
 * Copyright: Kevin Todd Cantrell (http://www.CropWatch.io)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "aiCamClientAppApp.h"
#include "aiCamClientAppMain.h"
#include </usr/include/x86_64-linux-gnu/curl/curl.h>

IMPLEMENT_APP(aiCamClientAppApp);

bool aiCamClientAppApp::OnInit()
{
    aiCamClientAppFrame *frame = new aiCamClientAppFrame(0L);
    LoginDLG *loginDlg = new LoginDLG(frame);

    if (loginDlg->ShowModal() == wxID_OK)
    {
        CURL *curl;
        CURLcode res;
        curl_global_init(CURL_GLOBAL_ALL);
        curl = curl_easy_init();
        if (curl)
        {
            struct curl_slist *chunk = NULL;
            chunk = curl_slist_append(chunk, "X-silly-header;");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, chunk);
            curl_easy_setopt(curl, CURLOPT_URL, "192.168.1.6:3000/api/login");
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "{ \"email\": \"kevin@cropwatch.io\", \"password\":\"Link888*\" }");
            res = curl_easy_perform(curl);
            if (res != CURLE_OK)
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            curl_easy_cleanup(curl);
        }
        curl_global_cleanup();
        frame->Show();
    }
    else
    {
        loginDlg->Destroy();
        frame->Destroy();
        return true;
    }

    return true;
}
