//
// Created by kunjeshvirani on 13/2/17.
//

#include "linedraw.h"

// in below function do not use keyword "static" because declaration in main header will generate error due to same typw with
// two time.

 void linedraw::draw() {


    // For First Line

    glShadeModel(GL_SMOOTH); // select a flat or smooth shading
    glVertexPointer(3, GL_FLOAT, 0, lineVertices);  // define the array of vertex data.
    glColorPointer(4, GL_FLOAT, 0, lineColor);   // define the array of color.
    glEnableClientState(GL_VERTEX_ARRAY);  // enable client side capability.
    glEnableClientState(GL_COLOR_ARRAY);
    glClear(GL_COLOR_BUFFER_BIT); // clear the rendering buffers
    glDrawArrays(GL_LINES, 0, 2);
    glFlush(); // force execution of GL commands in a finite time.


    // For Second Line

    glShadeModel(GL_SMOOTH); // select a flat or smooth shading
    glVertexPointer(3, GL_FLOAT, 0, linefVertices);  // define the array of vertex data.
    glColorPointer(4, GL_FLOAT, 0, linefColor);   // define the array of color.
    glEnableClientState(GL_VERTEX_ARRAY);  // enable client side capability.
    glEnableClientState(GL_COLOR_ARRAY);
    glDrawArrays(GL_LINES, 0, 2);
    glFlush(); // force execution of GL commands in a finite time.


    // For Third Line

    glShadeModel(GL_SMOOTH); // select a flat or smooth shading
    glVertexPointer(3, GL_FLOAT, 0, linelVertices);  // define the array of vertex data.
    glColorPointer(4, GL_FLOAT, 0, linelColor);   // define the array of color.
    glEnableClientState(GL_VERTEX_ARRAY);  // enable client side capability.
    glEnableClientState(GL_COLOR_ARRAY);
    glDrawArrays(GL_LINES, 0, 2);
    glFlush(); // force execution of GL commands in a finite time.
}



