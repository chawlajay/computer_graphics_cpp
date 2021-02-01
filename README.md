# Computer Graphics using cpp
From installing IDE, graphics library, different functions with code and syntax , I am uploading in here.

## STEPS TO INSTALL AND SETUP graphics.h in CODE::BLOCKS IDE.
## 1. Install Code::Blocks IDE from this [link](https://sourceforge.net/projects/codeblocks/files/latest/download), which is easy to work with C/C++.
Computer Graphics(CG) is old library but basics of CG becomes clear using graphics.h library and its functions. (If above CodeBlocks version don't works for you or shows errors, try this [17.12 version](https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download)

## 2. We need to download header files for graphics to work in our machine. Download 3 files from [here](https://github.com/chawlajay/computer_graphics_cpp/tree/main/graphics_library).

## 3. Add graphics.h and winbgim.h
Copy and Paste graphics.h and winbgim.h in the "include" folder inside MINGW folder of CodeBlocks folder in your machine. Generally the path is C:\Program Files (x86)\CodeBlocks\MinGW\include

## 4. Copy and Paste libbgi.a file in "lib" folder inside MINGW folder of CodeBlocks folder in your machine.
Generally the path is C:\Program Files (x86)\CodeBlocks\MinGW\lib 

## 5. After adding these libraries, do these setting in CodeBlocks IDE.
* In the Code::Blocks IDE, open Settings-> Compiler in menu bar.
* In the Popup Box appeared, click on Linker settings next to compiler settings.
* Add the Path of libbgi.a in "Link libraries" by clicking on Add button and then Browse Icon. Address of the file might be like this C:\Program Files (x86)\CodeBlocks\MinGW\lib\libbgi.a
* Then add (copy/paste) this below code in Other linker options, on right side of where you just added the path of libbgi.a file.
                                    
                                    -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
* Click on OK button to apply these changes and then close the application and then Restart your PC/Laptop.

## 6. Open Code::Blocks IDE after restarting is done and copy/paste this [sample code](https://github.com/chawlajay/computer_graphics_cpp/blob/main/sample_code.cpp) to test the working.
Save file in C++ language with extension .cpp OR you can make project as console application in C++ and file is saved by default as main.cpp in codeblocks.
	`Output will be generated in the window of size 640x480`

### If you have some error in codeblocks 20 version, then follow this [video](https://www.youtube.com/watch?v=VEkAj-xVTKQ&feature=youtu.be). Maybe it will solve your issue.
Suggested by [Meet](https://github.com/meet-soni5720)

## STEPS TO INSTALL AND SETUP glut.h (OpenGL library) in CODE::BLOCKS IDE.

## 1. Install CodeBlocks from link given above if you haven't yet.
## 2. Download [these](https://github.com/chawlajay/computer_graphics_cpp/tree/main/openGL_library_files) files in your PC/Laptop.
## 3. Follow steps given in this [link](http://www.sci.brooklyn.cuny.edu/~goetz/codeblocks/glut/).

