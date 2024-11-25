#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <iostream> // GLUT, include glu.h and gl.h
#include <cmath> // GLUT, include glu.h and gl.h
using namespace std;
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-20,20,-20,20);


 float x1,y1;
 float x2,y2;

 cout<<"please provide starting point:";
 cin>>x1>>y1;
 cout<<endl;

 cout<<"please provide end point:";
 cin>>x2>>y2;
 cout<<endl;
 float dy=(y2-y1);
 float dx= (x2-x1);
 float m=abs(dy/dx);
 cout <<"m:"<<m<<endl;

glPointSize(5);
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);

 if(m==1){

     for(int i=x1; i<=x2; i++)
        {
        float x=x1;
        float y=y1;
    x1++;
    y1++;
    glVertex2f(round(x),round(y));
        }

 }
 else if(m<1){

     for(int i=x1; i<=x2; i++)
        {
        float x=x1;
        float y=y1;
    x1++;
   y1= y1+m;
    glVertex2f (round(x),round(y));

        }
 }

  else if(m>1){

     for(int i=y1; i<=y2; i++)
        {
        float x=x1;
        float y=y1;
    x1= x1+(1/m);
    y1++;
    glVertex2f (round(x),round(y));
        }
 }

    glEnd();

    glFlush(); // Render now
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow("DDA"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
