#include <GL/glut.h>
#include <cmath>
#include <iostream>
#include<GL/gl.h>
//#include <GL/glut.h>
using namespace std;

float _move= 0.0f;


void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center
    for (int i = 0; i <= segments; i++) {
        float angle = 2.0f * M_PI * i / segments;
        glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
    }
    glEnd();
}

// Function to draw clouds
void drawCloud(float x, float y) {
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(x, y, 25, 100);     // Main cloud circle
    drawCircle(x - 30, y, 20, 100); // Left
    drawCircle(x + 30, y, 20, 100); // Right
    drawCircle(x, y + 15, 18, 100); // Top
}


void drawTree(float x, float y) {
    // Trunk
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_QUADS);
    glVertex2f(x - 15, y);
    glVertex2f(x + 15, y);
    glVertex2f(x + 15, y + 80);
    glVertex2f(x - 15, y + 80);
    glEnd();

    // Canopy
    glColor3f(0.0f, 0.8f, 0.0f);
    drawCircle(x, y + 100, 50, 100);  // Main canopy
    drawCircle(x - 35, y + 75, 40, 100); // Left canopy
    drawCircle(x + 35, y + 75, 40, 100); // Right canopy
}
void init() {
    glClearColor(0.24f, 0.19f, 0.09f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 600, 0, 600);
    glMatrixMode(GL_MODELVIEW);
}


void display() {


    // Sky
    glColor3f(0.53f, 0.81f, 0.99f);
    glBegin(GL_QUADS);
    glVertex2i(0, 300);
    glVertex2f(600, 300);
    glVertex2f(600, 600);
    glVertex2f(0, 600);
    glEnd();
glPushMatrix();
	glTranslatef(_move,0.0f, 0.0f);
// Clouds
    drawCloud(150, 500);
    drawCloud(250, 530);
    drawCloud(450, 550);
glPopMatrix();
 glPushMatrix();
	glTranslatef(-_move,0.0f, 0.0f); //moving along x-axis
	//glTranslatef(0.0f, _move, 0.0f); //will move along y-axis
	//glTranslatef(_move, _move, 0.0f); //will move diagonally along x&y-axis

    // Sun
    glColor3f(1.0f, 1.0f, 0.0f);
    drawCircle(550, 550, 40, 100);
glPopMatrix();


 //front
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(110,200);
        glVertex2f(310,200);
        glVertex2f(310,400);
        glVertex2f(110,400);
    glEnd();
//front door
     glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(170,200);
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
        glVertex2f(80,270);
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

    // Tree
    drawTree(400, 200);

    //glFlush();
    glutSwapBuffers();
}
void update(int value) {
    _move += .5f;


    if (_move > 600) {
        _move = -100;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}




/* Main function */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(80, 50);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("House ");
    init(); // Initialize OpenGL settings
    glutDisplayFunc(display);
    glutTimerFunc(20, update, 0); // Add a timer
    glutMainLoop();
    return 0;
}

