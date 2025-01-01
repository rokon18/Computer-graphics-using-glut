<<<<<<< HEAD
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <iostream> // GLUT, include glu.h and gl.h
#include <cmath> // GLUT, include glu.h and gl.h
#include <math.h>
using namespace std;

 int x1,yl;
 int x2,y2;
 int x3,y3;
   float tx,ty;
   float sx,sy;
   float degree, radian ;


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-250,250,-250,250);

 glBegin(GL_TRIANGLES);
glColor3f(1.0,0.0,0.0);
 glVertex2f(x1,yl);
 glVertex2f(x2,y2);
 glVertex2f(x3,y3);

  glEnd();


//translation
  glBegin(GL_TRIANGLES);
glColor3f(0.0,1.0,0.0);
 glVertex2f(x1+tx,yl+ty);
 glVertex2f(x2+tx,y2+ty);
 glVertex2f(x3+tx,y3+ty);
  glEnd();
  //scaling
   glBegin(GL_TRIANGLES);
glColor3f(0.0,0.0,1.0);
 glVertex2f(x1*sx,yl*sy);
 glVertex2f(x2*sx,y2*sy);
 glVertex2f(x3*sx,y3*sy);

  glEnd();

  //rotation anti
   glBegin(GL_TRIANGLES);
glColor3f(0.0,0.0,0.0);
 glVertex2f(x1*cos(radian)-yl*sin(radian),x1*sin(radian)+yl*cos(radian));
 glVertex2f(x2*cos(radian)-y2*sin(radian),x2*sin(radian)+y2*cos(radian));
 glVertex2f(x3*cos(radian)-y3*sin(radian),x3*sin(radian)+y3*cos(radian));

  glEnd();

    glFlush();
 }

 void input(){
      cout<<"please provide starting point:";
 cin>>x1>>yl;

 cout<<"please provide 2nd point:";
 cin>>x2>>y2;


 cout<<"please provide 3rd point:";
 cin>>x3>>y3;

 }
  void translation(){

      cout<<"please provide tx for translation:";
 cin>>tx;

 cout<<"please provide ty for translation:";
 cin>>ty;

 }
  void scaling(){

      cout<<"please provide sx for scaling:";
 cin>>sx;

 cout<<"please provide sy for scaling:";
 cin>>sy;

 }

  void rotation(){

cout<<"please provide degree for rotaion:";
 cin>>degree;

    double pi = 3.14159265359;


    radian =  degree * (pi / 180);

 }
 void clk(){


 }
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow(" mid point"); // Create a window with the given title
    input();
    cout<<"//////////////////"<<endl;
    cout<<"1.translation"<<endl;
    cout<<"2.scaling"<<endl;
    cout<<"3.rotation"<<endl;
    cout<<"//////////////////"<<endl;
    int in ;
    cout<<"select option:";
     cin>>in;


switch (in) {
  case 1:
    translation();
    break;
  case 2:
   scaling();
    break;
  case 3:
  rotation();
    break;
}

    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
=======
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <iostream> // GLUT, include glu.h and gl.h
#include <cmath> // GLUT, include glu.h and gl.h
#include <math.h>
using namespace std;

 int x1,yl;
 int x2,y2;
 int x3,y3;
   float tx,ty;
   float sx,sy;
   float degree, radian ;


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-250,250,-250,250);

 glBegin(GL_TRIANGLES);
glColor3f(1.0,0.0,0.0);
 glVertex2f(x1,yl);
 glVertex2f(x2,y2);
 glVertex2f(x3,y3);

  glEnd();


//translation
  glBegin(GL_TRIANGLES);
glColor3f(0.0,1.0,0.0);
 glVertex2f(x1+tx,yl+ty);
 glVertex2f(x2+tx,y2+ty);
 glVertex2f(x3+tx,y3+ty);
  glEnd();
  //scaling
   glBegin(GL_TRIANGLES);
glColor3f(0.0,0.0,1.0);
 glVertex2f(x1*sx,yl*sy);
 glVertex2f(x2*sx,y2*sy);
 glVertex2f(x3*sx,y3*sy);

  glEnd();

  //rotation anti
   glBegin(GL_TRIANGLES);
glColor3f(0.0,0.0,0.0);
 glVertex2f(x1*cos(radian)-yl*sin(radian),x1*sin(radian)+yl*cos(radian));
 glVertex2f(x2*cos(radian)-y2*sin(radian),x2*sin(radian)+y2*cos(radian));
 glVertex2f(x3*cos(radian)-y3*sin(radian),x3*sin(radian)+y3*cos(radian));

  glEnd();

    glFlush();
 }

 void input(){
      cout<<"please provide starting point:";
 cin>>x1>>yl;

 cout<<"please provide 2nd point:";
 cin>>x2>>y2;


 cout<<"please provide 3rd point:";
 cin>>x3>>y3;

 }
  void translation(){

      cout<<"please provide tx for translation:";
 cin>>tx;

 cout<<"please provide ty for translation:";
 cin>>ty;

 }
  void scaling(){

      cout<<"please provide sx for scaling:";
 cin>>sx;

 cout<<"please provide sy for scaling:";
 cin>>sy;

 }

  void rotation(){

cout<<"please provide degree for rotaion:";
 cin>>degree;

    double pi = 3.14159265359;


    radian =  degree * (pi / 180);

 }
 void clk(){


 }
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow(" mid point"); // Create a window with the given title
    input();
    cout<<"//////////////////"<<endl;
    cout<<"1.translation"<<endl;
    cout<<"2.scaling"<<endl;
    cout<<"3.rotation"<<endl;
    cout<<"//////////////////"<<endl;
    int in ;
    cout<<"select option:";
     cin>>in;


switch (in) {
  case 1:
    translation();
    break;
  case 2:
   scaling();
    break;
  case 3:
  rotation();
    break;
}

    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
>>>>>>> 20f66dae64302b63518f0ebe99d40647accde912
