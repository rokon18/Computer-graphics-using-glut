
#include <GL/glut.h>

void display() {
    glClearColor(0.5f, .5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    gluOrtho2D(-240,240,-240,240);
 for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
                if((i+j)%2==0){
                     glColor3f(1.0f, 1.0f, 1.0f);
                }else  glColor3f(0.0f, 0.0f, 0.0f);
                int sqsize=60;
                int x=-240+i*sqsize;
                int y=-240+j*sqsize;

    glBegin(GL_QUADS);

    glVertex2f(x, y);
    glVertex2f(x+sqsize,y);
    glVertex2f(x+sqsize,y+sqsize);
    glVertex2f(x, y+sqsize);
    glEnd();



    glFlush(); // Render now
}}}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(480, 480); // Set the window's initial width & height
    glutInitWindowPosition(200, 100);  // Set the window's initial position according to the monitor
    glutCreateWindow("Quads & Polygons"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
