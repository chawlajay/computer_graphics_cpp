# Computer Graphics using cpp
From installing IDE, graphics library, different function with code and syntax , I am uploading in here.

## 1. Install Code::Blocks IDE from this [link](https://sourceforge.net/projects/codeblocks/files/Binaries/16.01/Windows/codeblocks-16.01mingw-setup.exe/download), which is easy to work with and computer graphics is old but basics of CG becomes clear using graphics.h library and its functions.

## 2. We need to download header files for graphics to work in our machine. Download 3 files from [here](https://github.com/chawlajay/computer_graphics_cpp/tree/main/graphics_library).

## 3. Add graphics.h and winbgim.h
Copy and Paste graphics.h and winbgim.h in the "include" folder inside MINGW folder of CodeBlocks folder in your machine. Generally the path is C:\Program Files (x86)\CodeBlocks\MinGW\include

## 4. Copy and Paste libbgi.a file in "lib" folder inside MINGW folder of CodeBlocks folder in your machine. Generally the path is C:\Program Files (x86)\CodeBlocks\MinGW\lib 

## 5. After adding these libraries, do these setting in CodeBlocks IDE.
* In the Code::Blocks IDE, open Settings-> Compiler in menu bar.
* In the Popup Box appeared, click on Linker settings next to compiler settings.
* Add the Path of libbgi.a in "Link libraries" by clicking on Add button and then Browse Icon. Address of the file might be like this C:\Program Files (x86)\CodeBlocks\MinGW\lib\libbgi.a
* Then add (copy/paste) this below code in Other linker options, on right side of where you just added the path of libbgi.a file.
   -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
* Click on OK button to apply these changes and then close the application and then Restart your PC/Laptop.

## 6. Open Code::Blocks IDE after restarting is done and copy/paste this [sample code]() to test the working. Save file in C++ language with extension .cpp OR you can make project as console application in C++ and file is saved by default as main.cpp in codeblocks.



