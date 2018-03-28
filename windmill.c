// Para compilar no Mac
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

/*
// Para compilar no Linux
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
*/

void setup() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(2.5f, 5.0f);
        glVertex2f(-2.5f, 5.0f);
    glEnd();
    
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 1.0); 
	glVertex2f(0.0f, 0.0f);
        glVertex2f(2.5f, -5.0f);
        glVertex2f(-2.5f, -5.0f);
    glEnd();
    
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.0f, 0.0f);
        glVertex2f(5.0f, 2.5f);
        glVertex2f(5.0f, -2.5f);
    glEnd();
    
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-5.0f, 2.5f);
        glVertex2f(-5.0f, -2.5f);
    glEnd();
    
    glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 0.0); 
        glVertex2f(0.1,0.0);
        glVertex2f(-0.1,0.0);
        glVertex2f(0.1,-9.0);
        glVertex2f(-0.1,-9.0);
    glEnd();

/*
    glBegin(GL_LINES);
        glVertex2f(-10.0,0.0);
        glVertex2f(10.0,0.0);
        glVertex2f(0.0,10.0);
        glVertex2f(0.0,-10.0);
    glEnd();
*/
    glFlush();
}

void keyboard(unsigned char key, int x, int y) {

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(200, 100);
    glutInitWindowSize(800, 600);
    glutKeyboardFunc(keyboard);
    glutCreateWindow("Catavento");
    glutDisplayFunc(display);
    
    setup();
    glutMainLoop();

    return 0;
}

