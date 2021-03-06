/*******************************************************************************
* FILE NAME: test.cpp                                                          *
*                                                                              *
* DESCRIPTION:                                                                 *
*   Class implementation of the class:                                         *
*     test                                                                     *
* ---------------------------------------------------------------------------- *
* Warning: This file was generated by the VisualAge C++ Visual Builder.        *
* Modifications to this source file will be lost when the part is regenerated. *
*******************************************************************************/
#ifndef _IFRAME_
#include <iframe.hpp>
#endif

#ifndef _ICANVAS_
#include <icanvas.hpp>
#endif

#ifndef _INOTEBK_
#include <inotebk.hpp>
#endif

#ifndef _IPOINT_
#include <ipoint.hpp>
#endif

#ifndef _IRECT_
#include <irect.hpp>
#endif

#ifndef _IVBNBKPG_
#include <ivbnbkpg.hpp>
#endif

#ifndef _IENTRYFD_
#include <ientryfd.hpp>
#endif

#ifndef _IPUSHBUT_
#include <ipushbut.hpp>
#endif

#ifndef _ISTATTXT_
#include <istattxt.hpp>
#endif

#ifndef _APAGEHANDLER_
#include "PgHndler.hpp"
#endif

#ifndef _INOTIFEV_
#include <inotifev.hpp>
#endif

#ifndef _IOBSERVR_
#include <iobservr.hpp>
#endif

#ifndef _ISTDNTFY_
#include <istdntfy.hpp>
#endif

#ifndef _TEST_
#include "test.hpp"
#endif

#ifndef _IVBDEFS_
#include <ivbdefs.h>
#endif

#ifndef _ITRACE_
#include <itrace.hpp>
#endif


//*****************************************************************************
// Class definition for testConn0
//*****************************************************************************
class testConn0 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn0(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(IPushButton * aSource, APageHandler * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   testConn0 & setNotebk(INotebook * aSelf) {iNotebk = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == IPushButton::buttonClickId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : PushButton1(buttonClickEvent) to APageHandler1(startHandleFor))");
         try {target->handleFor(iNotebk);}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   IPushButton * source;
   APageHandler * target;
   INotebook * iNotebk;


};   //testConn0


//*****************************************************************************
// Class definition for testConn2
//*****************************************************************************
class testConn2 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn2(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(IPushButton * aSource, APageHandler * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   testConn2 & setNotebk(INotebook * aSelf) {iNotebk = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == IPushButton::buttonClickId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : PushButton2(buttonClickEvent) to APageHandler1(stopHandleFor))");
         try {target->stopHandleFor(iNotebk);}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   IPushButton * source;
   APageHandler * target;
   INotebook * iNotebk;


};   //testConn2


//*****************************************************************************
// Class definition for testConn4
//*****************************************************************************
class testConn4 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn4(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   testConn4 & setNewValue(APageHandler * aSelf) {iNewValue = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == APageHandler::page3SelectedEventId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(page3SelectedEvent) to EntryField3(valueAsInt))");
         try {target->VBSETTEXTFROMVALUE(iNewValue->currentPageNumber());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;
   APageHandler * iNewValue;


};   //testConn4


//*****************************************************************************
// Class definition for testConn6
//*****************************************************************************
class testConn6 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn6(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   testConn6 & setNewValue(APageHandler * aSelf) {iNewValue = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == APageHandler::page1SelectedEventId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(page1SelectedEvent) to EntryField4(valueAsInt))");
         try {target->VBSETTEXTFROMVALUE(iNewValue->currentPageNumber());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;
   APageHandler * iNewValue;


};   //testConn6


//*****************************************************************************
// Class definition for testConn8
//*****************************************************************************
class testConn8 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn8(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };
   testConn8 & setNewValue(APageHandler * aSelf) {iNewValue = aSelf; return *this;};

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == APageHandler::page2SelectedEventId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(page2SelectedEvent) to EntryField5(valueAsInt))");
         try {target->VBSETTEXTFROMVALUE(iNewValue->currentPageNumber());}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;
   APageHandler * iNewValue;


};   //testConn8


//*****************************************************************************
// Class definition for testConn10
//*****************************************************************************
class testConn10 : public IObserver {
public:
   virtual  ~testConn10(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; aligning = false; };
   void setSource()
      {
      if (aligning==false) {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(currentPageNumber) to EntryField1(valueAsInt))");
         ITRACE_DEVELOP(" setting source from target ");
         aligning = true;
         try {source->setCurrentPageNumber(target->VBINTVALUEFROMTEXT());}
         catch (IException& exc) {};
         aligning = false;
         }
      };
   void setTarget()
      {
      if (aligning==false) {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(currentPageNumber) to EntryField1(valueAsInt))");
         ITRACE_DEVELOP(" setting target from source ");
         aligning = true;
         try {target->VBSETTEXTFROMVALUE(source->currentPageNumber());}
         catch (IException& exc) {};
         aligning = false;
         }
      };

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == VBINITIALIZEID) setTarget();
      if ((anEvent.notificationId() == APageHandler::currentPageNumberId) && (source == &anEvent.notifier()))
         setTarget();  /* set target to source value */
      else
      if ((anEvent.notificationId() == IEntryField::textId) && (target == &anEvent.notifier()))
         setSource();  /* set source to target value */
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;
   Boolean aligning;


};   //testConn10


//*****************************************************************************
// Class definition for testConn11
//*****************************************************************************
class testConn11 : public IObserver {
public:
   virtual  ~testConn11(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; aligning = false; };
   void setSource()
      {
      if (aligning==false) {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(previousPageNumber) to EntryField2(valueAsInt))");
         ITRACE_DEVELOP(" setting source from target ");
         aligning = true;
         try {source->setPreviousPageNumber(target->VBINTVALUEFROMTEXT());}
         catch (IException& exc) {};
         aligning = false;
         }
      };
   void setTarget()
      {
      if (aligning==false) {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(previousPageNumber) to EntryField2(valueAsInt))");
         ITRACE_DEVELOP(" setting target from source ");
         aligning = true;
         try {target->VBSETTEXTFROMVALUE(source->previousPageNumber());}
         catch (IException& exc) {};
         aligning = false;
         }
      };

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == VBINITIALIZEID) setTarget();
      if ((anEvent.notificationId() == APageHandler::previousPageNumberId) && (source == &anEvent.notifier()))
         setTarget();  /* set target to source value */
      else
      if ((anEvent.notificationId() == IEntryField::textId) && (target == &anEvent.notifier()))
         setSource();  /* set source to target value */
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;
   Boolean aligning;


};   //testConn11


//*****************************************************************************
// Class definition for testConn12
//*****************************************************************************
class testConn12 : public IObserver, public IStandardNotifier {
public:
   virtual  ~testConn12(){};

   //---------------------------------------------------------------------------
   // public member functions
   //---------------------------------------------------------------------------
   void initialize(APageHandler * aSource, IEntryField * aTarget)
      {source = aSource; target = aTarget; enableNotification(); };

protected:
   //---------------------------------------------------------------------------
   // protected member functions
   //---------------------------------------------------------------------------
   virtual IObserver & dispatchNotificationEvent(const INotificationEvent & anEvent)
      {
      if (anEvent.notificationId() == APageHandler::anyPageSelectedEventId)
         {
         IFUNCTRACE_DEVELOP();
         ITRACE_DEVELOP(" firing connection : APageHandler1(anyPageSelectedEvent) to EntryField6(customLogic, \"set ef to the selected page number\"))");
         try {codeSnippet(&anEvent);}
         catch (IException& exc) {};
         }
      return(*this);
      };

private:
   //---------------------------------------------------------------------------
   // private member functions
   //---------------------------------------------------------------------------
   void codeSnippet(const INotificationEvent* event)
      {
      // get page number from IEventData object.
      // event->eventData returns en IEventData object.

      target->VBSETTEXTFROMVALUE(event->eventData().asLong());
      };

   //---------------------------------------------------------------------------
   // private member data
   //---------------------------------------------------------------------------
   APageHandler * source;
   IEntryField * target;


};   //testConn12


#pragma export (test::readyId)
const INotificationId test::readyId = "test::readyId";

#pragma export (test::partWindowId)
unsigned long test::partWindowId = 0;

//------------------------------------------------------------------------------
// test :: defaultFramingSpec
//------------------------------------------------------------------------------
#pragma export (test::defaultFramingSpec())
const IRectangle test::defaultFramingSpec()
{
   return(IRectangle(IPoint(30, IWindow::desktopWindow()->size().height() - -2 - 416),ISize(545, 416)));
}


//------------------------------------------------------------------------------
// test :: defaultTitle
//------------------------------------------------------------------------------
#pragma export (test::defaultTitle())
IString test::defaultTitle()
{
   return("IPageHandler example");
}


//------------------------------------------------------------------------------
// test :: test
//------------------------------------------------------------------------------
#pragma export (test::test(unsigned long, IWindow*, IWindow*, const IRectangle&, const IFrameWindow::Style&, const char*))
test::test(
      unsigned long id, 
      IWindow* parent, 
      IWindow* owner, 
      const IRectangle& rect, 
      const IFrameWindow::Style& style, 
      const char* title)
   : IFrameWindow((partWindowId) ? partWindowId : id, parent, owner, rect, style, title)
{
   partWindowId = (partWindowId) ? partWindowId : id;
   iCanvas = new ICanvas(
      IC_FRAME_CLIENT_ID, 
      this, 
      this, 
      IRectangle());
   iNotebook1 = new INotebook(
      partWindowId+WNDOFFSET_test_Notebook1, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(18,136),ISize(438, 220)));
   iCanvas2 = new ICanvas(
      partWindowId+WNDOFFSET_test_Canvas2, 
      iNotebook1, 
      iNotebook1, 
      IRectangle());
   iEntryField4 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField4, 
      iCanvas2, 
      iCanvas2, 
      IRectangle(IPoint(54,93),ISize(200, 25)));
   iVBNotebookPage = new IVBNotebookPage(iNotebook1, INotebook::PageSettings::majorTab | INotebook::PageSettings::autoPageSize, iCanvas2);
   iCanvas1 = new ICanvas(
      partWindowId+WNDOFFSET_test_Canvas1, 
      iNotebook1, 
      iNotebook1, 
      IRectangle());
   iEntryField5 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField5, 
      iCanvas1, 
      iCanvas1, 
      IRectangle(IPoint(54,97),ISize(237, 26)));
   iVBNotebookPage1 = new IVBNotebookPage(iNotebook1, INotebook::PageSettings::majorTab | INotebook::PageSettings::autoPageSize, iCanvas1);
   iCanvas3 = new ICanvas(
      partWindowId+WNDOFFSET_test_Canvas3, 
      iNotebook1, 
      iNotebook1, 
      IRectangle());
   iEntryField3 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField3, 
      iCanvas3, 
      iCanvas3, 
      IRectangle(IPoint(65,111),ISize(235, 25)));
   iVBNotebookPage2 = new IVBNotebookPage(iNotebook1, INotebook::PageSettings::majorTab | INotebook::PageSettings::autoPageSize, iCanvas3);
   iEntryField1 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField1, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(19,74),ISize(161, 26)));
   iPushButton1 = new IPushButton(
      partWindowId+WNDOFFSET_test_PushButton1, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(85,25),ISize(124, 34)));
   iPushButton2 = new IPushButton(
      partWindowId+WNDOFFSET_test_PushButton2, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(268,24),ISize(121, 34)));
   iEntryField2 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField2, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(205,71),ISize(148, 27)));
   iStaticText1 = new IStaticText(
      partWindowId+WNDOFFSET_test_StaticText1, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(19,102),ISize(158, 25)));
   iStaticText2 = new IStaticText(
      partWindowId+WNDOFFSET_test_StaticText2, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(205,102),ISize(138, 25)));
   iEntryField6 = new IEntryField(
      partWindowId+WNDOFFSET_test_EntryField6, 
      iCanvas, 
      iCanvas, 
      IRectangle(IPoint(392,72),ISize(129, 24)));
   iAPageHandler1 = new APageHandler();

   conn0 = new testConn0();
   conn2 = new testConn2();
   conn4 = new testConn4();
   conn6 = new testConn6();
   conn8 = new testConn8();
   conn10 = new testConn10();
   conn11 = new testConn11();
   conn12 = new testConn12();

   this->setFocus();
   this->setClient(iCanvas);
   iNotebook1->setMinorTabSize(ISize(0, 0));
   iVBNotebookPage->setTabText("Tab1");
   iCanvas2->setMinimumSize(ISize(100, 100));
   iVBNotebookPage1->setTabText("Tab2");
   iCanvas1->setMinimumSize(ISize(100, 100));
   iVBNotebookPage2->setTabText("Tab3");
   iCanvas3->setMinimumSize(ISize(100, 100));
   iPushButton1->setText("start handle");
   iPushButton2->setText("stop handle");
   iStaticText1->setText("current pg number");
   iStaticText2->setText("previous page #");
}     //end constructor


//------------------------------------------------------------------------------
// test :: ~test
//------------------------------------------------------------------------------
#pragma export (test::~test())
test::~test()
{
   conn0->stopHandlingNotificationsFor(*iPushButton1);
   conn2->stopHandlingNotificationsFor(*iPushButton2);
   conn4->stopHandlingNotificationsFor(*iAPageHandler1);
   conn6->stopHandlingNotificationsFor(*iAPageHandler1);
   conn8->stopHandlingNotificationsFor(*iAPageHandler1);
   conn10->stopHandlingNotificationsFor(*iAPageHandler1);
   conn10->stopHandlingNotificationsFor(*iEntryField1);
   conn11->stopHandlingNotificationsFor(*iAPageHandler1);
   conn11->stopHandlingNotificationsFor(*iEntryField2);
   conn12->stopHandlingNotificationsFor(*iAPageHandler1);

   delete conn0;
   delete conn2;
   delete conn4;
   delete conn6;
   delete conn8;
   delete conn10;
   delete conn11;
   delete conn12;


   delete iCanvas;
   delete iNotebook1;
   delete iVBNotebookPage;
   delete iCanvas2;
   delete iEntryField4;
   delete iVBNotebookPage1;
   delete iCanvas1;
   delete iEntryField5;
   delete iVBNotebookPage2;
   delete iCanvas3;
   delete iEntryField3;
   delete iEntryField1;
   delete iPushButton1;
   delete iPushButton2;
   delete iEntryField2;
   delete iStaticText1;
   delete iStaticText2;
   delete iEntryField6;
   delete iAPageHandler1;
}

//------------------------------------------------------------------------------
// test :: initializePart
//------------------------------------------------------------------------------
#pragma export (test::initializePart())
test & test::initializePart()
{
   makeConnections();
   notifyObservers(INotificationEvent(readyId, *this));
   return *this;
}


//------------------------------------------------------------------------------
// test :: makeConnections
//------------------------------------------------------------------------------
#pragma export (test::makeConnections())
Boolean test::makeConnections()
{
   this->enableNotification();
   iCanvas->enableNotification();
   iNotebook1->enableNotification();
   iVBNotebookPage->enableNotification();
   iCanvas2->enableNotification();
   iEntryField4->enableNotification();
   iVBNotebookPage1->enableNotification();
   iCanvas1->enableNotification();
   iEntryField5->enableNotification();
   iVBNotebookPage2->enableNotification();
   iCanvas3->enableNotification();
   iEntryField3->enableNotification();
   iEntryField1->enableNotification();
   iPushButton1->enableNotification();
   iPushButton2->enableNotification();
   iEntryField2->enableNotification();
   iStaticText1->enableNotification();
   iStaticText2->enableNotification();
   iEntryField6->enableNotification();
   iAPageHandler1->enableNotification();

   conn0->initialize(iPushButton1, iAPageHandler1);
   conn0->handleNotificationsFor(*iPushButton1);
   conn0->setNotebk(iNotebook1);
   conn2->initialize(iPushButton2, iAPageHandler1);
   conn2->handleNotificationsFor(*iPushButton2);
   conn2->setNotebk(iNotebook1);
   conn4->initialize(iAPageHandler1, iEntryField3);
   conn4->handleNotificationsFor(*iAPageHandler1);
   conn4->setNewValue(iAPageHandler1);
   conn6->initialize(iAPageHandler1, iEntryField4);
   conn6->handleNotificationsFor(*iAPageHandler1);
   conn6->setNewValue(iAPageHandler1);
   conn8->initialize(iAPageHandler1, iEntryField5);
   conn8->handleNotificationsFor(*iAPageHandler1);
   conn8->setNewValue(iAPageHandler1);
   conn10->initialize(iAPageHandler1, iEntryField1);
   conn10->handleNotificationsFor(*iAPageHandler1);
   conn10->handleNotificationsFor(*iEntryField1);
   conn11->initialize(iAPageHandler1, iEntryField2);
   conn11->handleNotificationsFor(*iAPageHandler1);
   conn11->handleNotificationsFor(*iEntryField2);
   conn12->initialize(iAPageHandler1, iEntryField6);
   conn12->handleNotificationsFor(*iAPageHandler1);

   conn10->setTarget();
   conn11->setTarget();
   return true;
}



