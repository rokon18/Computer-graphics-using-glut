#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.47f, 0.29f);//south green
    glVertex2f(0,0);
    glVertex2f(900,0);
    glVertex2f(900, 600);
    glVertex2f(0, 600);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.72f, 0.11f);//south yollow
    glVertex2f(0, 60);
    glVertex2f(0, 540);
    glVertex2f(370,300);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 0);//south black
    glVertex2f(0, 100);
    glVertex2f(0, 500);
    glVertex2f(310,300);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);//up white
    glVertex2f(100,600);
    glVertex2f(900,600);
    glVertex2f(900,360);
    glVertex2f(470,360);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.89, .24, 0.19);//up red
    glVertex2f(170,600);
    glVertex2f(900,600);
    glVertex2f(900,400);
    glVertex2f(490,400);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);//bottom white
    glVertex2f(900,0);
    glVertex2f(900,240);
    glVertex2f(470,240);
    glVertex2f(100,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0.078, 0.54);//bottom white
    glVertex2f(900,0);
    glVertex2f(900,200);
    glVertex2f(490,200);
    glVertex2f(170,0);//problem here y axis -40 but x 70
    glEnd();


	glFlush();  // Render now
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 900.0, 0.0, 600.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(900, 600);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of south africa"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
