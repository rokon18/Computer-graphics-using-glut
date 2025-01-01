#include <GL/glut.h>
#include <math.h>

/*void drawPiece(float x, float y, float size, float r, float g, float b) {
    glColor3f(r, g, b); // Set the color of the piece
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 10) {
        float angle = i * 3.14159f / 180.0f;
        glVertex2f(x + size * cos(angle), y + size * sin(angle));
    }
    glEnd();
}*/

void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    gluOrtho2D(-240, 240, -240, 240);

    int sqsize = 60; // Size of each square

    // Draw the chessboard
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                glColor3f(1.0f, 1.0f, 1.0f); // White square
            } else {
                glColor3f(0.0f, 0.0f, 0.0f); // Black square
            }

            int x = -240 + i * sqsize;
            int y = -240 + j * sqsize;

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + sqsize, y);
            glVertex2f(x + sqsize, y + sqsize);
            glVertex2f(x, y + sqsize);
            glEnd();
        }
    }

   /* // Draw the queen (Q) at c5
    float queenX = -240 + 2 * sqsize + sqsize / 2;
    float queenY = -240 + 4 * sqsize + sqsize / 2;
    drawPiece(queenX, queenY, sqsize / 3, 1.0f, 0.0f, 0.0f); // Red queen

    // Draw the king (K) at h8
    float kingX = -240 + 7 * sqsize + sqsize / 2;
    float kingY = -240 + 7 * sqsize + sqsize / 2;
    drawPiece(kingX, kingY, sqsize / 3, 0.0f, 0.0f, 1.0f); // Blue king*/

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(480, 480); // Set the window's initial width & height
    glutInitWindowPosition(200, 100); // Set the window's initial position
    glutCreateWindow("Chessboard with Queen and King"); // Create a window with a title
    glutDisplayFunc(display); // Register display callback handler
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
