NAME: pgehdl.zip (an example of a wrapper non-visual part for IPageHandler )

COPYRIGHT:
----------
Copyright (C) International Business Machines Corp., 1991,1995.

DISCLAIMER OF WARRANTIES:
-------------------------
The following [enclosed] code is sample code created by IBM
Corporation.  This sample code is not part of any standard IBM product
and is provided to you solely for the purpose of assisting you in the
development of your applications.  The code is provided "AS IS",
without warranty of any kind.  IBM shall not be liable for any damages
arising out of your use of the sample code, even if they have been
advised of the possibility of such damages.


DESCRIPTION:

The sample contains a wrapper non-visual part for IPageHandler. If your app
needs to be notified when a tab or page button on a notebook is selected,
then this part is for you.  The sample was built using the VAC++ v3.0
with all the latest FixPaks applied as of 02/26/96.


How to build the wrapper part:

 - take a look at pagehdl.vbb, pghndler.hpv and pghndler.cpv.
 - If the part has all features you need, you don't need to rebuild
   it.


How to use this wrapper part in a VB part:

 - copy all pghndler.* files to the current working directory.
 - Load up pagehdl.vbb in the VB main dialog box.
 - Open/create a visual part that you want to attach the pagehandler part.
 - Add/Drop APageHandler part onto the f/f surface.
 - Attach the notebook to the pagehandler part : i.e
    - connect an event (i.e readyEvent ) -> APageHandler(startHandle)
    - connect notebook(this) -> above connection(notebk)

 - The pagehandler part has 3 predefined page selected events
   (page1SelectedEvent, page2SelectedEvent, and page3SelectedEvent )

   You connect these events to your own methods/actions for special processing
   when a tab is selected.

 - If you have more than 3 pages in the notebook, you can

    - add the new page events , save and generate "Feature source" for these events
      and then update the APageHandler::setCurrentPageNumber() method in pghndler.cpv
      to send out these new event.


    or

    - use the generic anyPageSelectedEvent which contains the selected page number
      in the IEventData object.  Take a look at the sample in test.vbb on how to get
      the selected page number.


This sample was created by Brian Luc, bluc@vnet.ibm.com
Feb 26, 1996.
