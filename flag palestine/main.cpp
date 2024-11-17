#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.59f, 0.21f); //palestine green
    glVertex2i(0, 0);    // x, y
	glVertex2i(660, 0);    // x, y
    glVertex2i(660, 110);    // x, y
	glVertex2i(0, 110);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1,1,1); //palestine white
    glVertex2i(0, 110);    // x, y
	glVertex2i(660, 110);    // x, y
    glVertex2i(660, 220);    // x, y
	glVertex2i(0, 220);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0,0,0); //palestine black
    glVertex2i(0, 220);    // x, y
	glVertex2i(660, 220);    // x, y
    glVertex2i(660, 330);    // x, y
	glVertex2i(0, 330);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.93f,0.16f,0.21f); //palestine red
    glVertex2i(0, 0);
    glVertex2i(220,165);      // x, y
	glVertex2i(0,330);    // x, y
      // x, y

	glEnd();



	glFlush();  // Render now
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 660.0, 0.0, 330.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(660, 330);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of palestine"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
