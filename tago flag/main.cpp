#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.42f, 0.30f); //togo green
    glVertex2i(0, 0);    // x, y
	glVertex2i(900, 0);    // x, y
    glVertex2i(900, 120);    // x, y
	glVertex2i(0, 120);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.81f, 0.0f); //togo yellow
    glVertex2i(0, 120);    // x, y
	glVertex2i(900, 120);    // x, y
    glVertex2i(900, 240);    // x, y
	glVertex2i(0, 240);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.42f, 0.30f); //togo green
    glVertex2i(0, 240);    // x, y
	glVertex2i(900, 240);    // x, y
    glVertex2i(900, 360);    // x, y
	glVertex2i(0, 360);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.81f, 0.0f); //togo yellow
    glVertex2i(0, 360);    // x, y
	glVertex2i(900, 360);    // x, y
    glVertex2i(900, 480);    // x, y
	glVertex2i(0, 480);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.42f, 0.30f); //togo green
    glVertex2i(0, 480);    // x, y
	glVertex2i(900, 480);    // x, y
    glVertex2i(900, 600);    // x, y
	glVertex2i(0, 600);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.0f, 0.42f, 0.30f); //togo green
    glVertex2i(0, 480);    // x, y
	glVertex2i(900, 480);    // x, y
    glVertex2i(900, 600);    // x, y
	glVertex2i(0, 600);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.82f, 0.06f, 0.20f); //togo red
    glVertex2i(0, 600);    // x, y
	glVertex2i(334, 600);    // x, y
    glVertex2i(334, 240);    // x, y
	glVertex2i(0, 240);
	glEnd();



    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //white star
	glVertex2i(130, 380);
    glVertex2i(95, 270);
    glVertex2i(180, 343);
	glVertex2i(265, 270);
	glVertex2i(230, 380);
    glVertex2i(320, 450);
    glVertex2i(216, 450);
    glVertex2i(180, 560);
    glVertex2i(144, 450);
	glVertex2i(40, 450);
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
	glutInitWindowSize(900 ,600);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of togo"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
