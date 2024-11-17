#include <GL/glut.h>  // GLUT, include glu.h and gl.h


void display()
{
    glClearColor(0.24f, 0.19f, 0.09f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	                                 // Clear the color buffer with current clearing color
	gluOrtho2D(0,600,0,600);
//sky
 glColor3f(0.53f, 0.81f, 0.99f);
    glBegin(GL_QUADS);
        glVertex2i(0,300);
        glVertex2f(600,300);
        glVertex2f(600,600);
        glVertex2f(0,600);
    glEnd();

//front
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2i(110,200);
        glVertex2f(310,200);
        glVertex2f(310,400);
        glVertex2f(110,400);
    glEnd();
//front door
     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2i(170,200);
        glVertex2f(220,200);
        glVertex2f(220,300);
        glVertex2f(170,300);
    glEnd();
//left
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2i(110,200);
        glVertex2f(110,400);
        glVertex2f(60,430);
        glVertex2f(60,230);
    glEnd();
//left window
      glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2i(80,270);
        glVertex2f(100,265);
        glVertex2f(100,305);
        glVertex2f(80,310);
    glEnd();

    //river
  glColor3f(0.26f, 0.73f, 1.0f);

    glBegin(GL_POLYGON);
        glVertex2i(600,450);
        glVertex2f(400,300);
        glVertex2f(500,280);
        glVertex2f(380,0);
        glVertex2f(600,0);
    glEnd();
    //up back
     glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2i(20,420);
        glVertex2f(270,420);
        glVertex2f(310,500);
        glVertex2f(40,500);
    glEnd();
//up front
     glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2i(100,380);
        glVertex2f(350,380);
        glVertex2f(310,500);
        glVertex2f(40,500);
    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(600, 600);   // Set the window's initial width & height
	glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutDisplayFunc(display);       // Register callback handler for window re-paint event

	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
