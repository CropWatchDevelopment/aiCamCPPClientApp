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

IMPLEMENT_APP(aiCamClientAppApp);

bool aiCamClientAppApp::OnInit()
{
    aiCamClientAppFrame* frame = new aiCamClientAppFrame(0L);
    LoginDLG* loginDlg = new LoginDLG(frame);
    
    if ( loginDlg->ShowModal() == wxID_OK )
    {
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
