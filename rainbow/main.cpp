
#include <GL/glut.h>

void display() {
    glClearColor(1.f, 1.0f, 1.0f, 0.0f);
  //  glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-250,250,-250,250);

    glBegin(GL_QUADS);
    glColor3f(0.31f, 0.2f, 0.54f);
    glVertex2f(-250,-250);
    glVertex2f(250,-250);
    glVertex2f(250, -166.6);
    glVertex2f(-250,-166.6);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(-250,-166.6);
    glVertex2f(250,-166.6);
    glVertex2f(250, -83.3);
    glVertex2f(-250,-83.3);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(-250,-83.3);
    glVertex2f(250,-83.3);
    glVertex2f(250, -0.04);
    glVertex2f(-250,-0.04);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1, 1, 0);
    glVertex2f(-250,-0.04);
    glVertex2f(250,-0.04);
    glVertex2f(250, 83.26);
    glVertex2f(-250,83.26);
    glEnd();

      glBegin(GL_QUADS);
    glColor3f(0.99f, 0.53f, 0.01f);
    glVertex2f(-250,83.26);
    glVertex2f(250,83.26);
    glVertex2f(250, 166.56);
    glVertex2f(-250,166.56);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(-250,166.56);
    glVertex2f(250,166.56);
    glVertex2f(250, 249.86);
    glVertex2f(-250,249.86);
    glEnd();


    glFlush(); // Render now
}

/* Main function*/
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow("Rainbow"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
