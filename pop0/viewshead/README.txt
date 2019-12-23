===Introduction===

Viewshead is a simple module that allows you to insert views-field-data 
into the <head> tag of the page as:

<meta name=YourMetaName content=YourFieldData,YourFieldData,etc... />

===Installation===

Viewshead depends on the Views module being installed.

In order to install Viewshead, unpack the archive in which it was delivered 
in the ./drupal6/modules directory, and enable it in the Drupal 
admin/build/modules page of your Drupal site.

===Usage===

Viewshead is a field "handler." 

In order to use Viewshead: 

 In the display of Views-UI "Add a field," there will be a "Viewshead," group, 
 and a "Viewshead," field.

 Add one. ;)

 Name the field, at the moment your options for configuring the tag are to use
  name= (choose something: description, keywords, etc)
  delimiter= (comma is default, [field-result0],[field-result1],[etc..]

              Choosing no delimiter indicates anything already in the same name 
              at the time of page-display is discarded in favor of the 
              undeliminated data) 

 Save the View.

 Load the page.

 Look in the head tag, you will see <meta name="Yourname" content="Result0"/> or
 <meta name="Yourname" content="Result0,Result1,Result2,etc.."/> respectively.

=== To Do ===

Add <title> and more complex tag support.

Add by-path rendering restrictions of some kind.

Add php re-write support to fields rendered by the handler.
 
