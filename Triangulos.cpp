#include "Triangulos.h"

Triangulos::Triangulos() {

};

void Triangulos::dibujarTriangulos(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
        glBegin(GL_TRIANGLES);
            glVertex3f(-0.8, 0, 0);
            glVertex3f(0, 0.8, 0);
            glVertex3f(0.8, 0, 0);
        glEnd();
    glPopMatrix();
};