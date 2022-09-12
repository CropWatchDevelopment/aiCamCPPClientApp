///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define idMenuAbout 1001

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* helpMenu;
		wxStatusBar* statusBar;

		// Virtual event handlers, override them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWidgets Application Template"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 481,466 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~GUIFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LoginDLG
///////////////////////////////////////////////////////////////////////////////
class LoginDLG : public wxDialog
{
	private:

	protected:
		wxStaticText* EmailLBL;
		wxTextCtrl* EmailTXT;
		wxStaticText* PasswordLBL;
		wxTextCtrl* PasswordTXT;
		wxButton* RegisterBTN;
		wxButton* LoginBTN;

		// Virtual event handlers, override them in your derived class
		virtual void LoginBTNOnLeftDown( wxMouseEvent& event ) { event.Skip(); }


	public:

		LoginDLG( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("CropWatch Login"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 241,177 ), long style = wxDEFAULT_DIALOG_STYLE );

		~LoginDLG();

};

