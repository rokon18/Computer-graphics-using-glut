#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <iostream> // GLUT, include glu.h and gl.h
//#include <cmath> // GLUT, include glu.h and gl.h
using namespace std;
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-20,20,-20,20);


 int x1,y1;
 int x2,y2;

 cout<<"please provide starting point:";
 cin>>x1>>y1;
 cout<<endl;

 cout<<"please provide end point:";
 cin>>x2>>y2;
 cout<<endl;
 int dy=(y2-y1);
 int dx=(x2-x1);

 glPointSize(5);
glBegin(GL_POINTS);
glColor3f(1.0f, 0.0f, 0.0f);
int d=2*dy-dx;
int d_ne=2*(dy-dx);
int d_e=2*dy;
 if(dy==dx){
     while(x1<=x2){
        int x=x1;
        int y=y1;
        glVertex2f(x,y);
        x1++;
        y1++;
        }
  }

  else if(dy<dx){
     while(x1<=x2){
        int x=x1;
        int y=y1;
        glVertex2f(x,y);
        x1++;
        if(d>0){
            y1++;
            d=d+d_ne;
        }
        else{
            d=d+d_e;
        }

        }
   }

 else if(dy>dx){
        int dd=2*dx-dy;
        int dd_ne=2*(dx-dy);
        int dd_n=2*dx;
     while(y1<=y2){
        int x=x1;
        int y=y1;
        glVertex2f(x,y);
        y1++;
        if(dd>0){
            x1++;
            dd=dd+dd_ne;
        }
        else{
            dd=dd+dd_n;
        }

        }
   }


 glEnd();

    glFlush();
 }


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow(" mid point"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
