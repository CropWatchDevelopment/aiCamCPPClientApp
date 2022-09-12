/***************************************************************
 * Name:      aiCamClientAppMain.h
 * Purpose:   Defines Application Frame
 * Author:    Kevin Todd Cantrell (Kevin@CropWatch.io)
 * Created:   2022-09-13
 * Copyright: Kevin Todd Cantrell (http://www.CropWatch.io)
 * License:
 **************************************************************/

#ifndef AICAMCLIENTAPPMAIN_H
#define AICAMCLIENTAPPMAIN_H



#include "aiCamClientAppApp.h"


#include "GUIFrame.h"

class aiCamClientAppFrame: public GUIFrame
{
    public:
        aiCamClientAppFrame(wxFrame *frame);
        ~aiCamClientAppFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // AICAMCLIENTAPPMAIN_H
