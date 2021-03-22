#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
#include<stdio.h>
void start_the_window()
{
// background color black
glClearColor(0.0,0.0,0.0,1.0);
// making picture color green (in RGB mode), as middle argument is 1.0
glColor3f(0.0, 1.0, 0.0);
glPointSize(7.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
// setting window dimension in X- and Y- direction
gluOrtho2D(-780, 780, -420, 420);
}
void display (void)
{
glClear(GL_COLOR_BUFFER_BIT);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);
glVertex2f(0, 0);
glVertex2f(150, 0);
glVertex2f(225, 105);
glVertex2f(150, 210);
glVertex2f(0, 210);
glVertex2f(-75, 105);
glEnd();
glFlush();
}
int main(int argc, char *argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// DEFINE WINDOW SIZE
glutInitWindowSize(700,400);
glutInitWindowPosition(0,0);
// Window name
glutCreateWindow("Points");
start_the_window();
glutDisplayFunc(display);
glutMainLoop();
return EXIT_SUCCESS;
}
