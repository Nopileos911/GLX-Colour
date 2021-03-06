/**  © 2013, Brandon T. All Rights Reserved.
  *
  *  This file is part of the GLX Library.
  *  GLX is free software: you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation, either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  GLX is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with GLX.  If not, see <http://www.gnu.org/licenses/>.
  */

#include "Exports.hpp"

Library* OriginalGL = nullptr;

void (__stdcall *ptr_glAccum) (GLenum op, GLfloat value);
void (__stdcall *ptr_glActiveTextureARB) (GLenum texture);
void (__stdcall *ptr_glAlphaFunc) (GLenum func, GLclampf ref);
GLboolean (__stdcall *ptr_glAreTexturesResident) (GLsizei n, const GLuint *textures, GLboolean *residences);
void (__stdcall *ptr_glArrayElement) (GLint index);
void (__stdcall *ptr_glBegin) (GLenum mode);
void (__stdcall *ptr_glBindBufferARB) (GLenum target, GLuint buffer);
void (__stdcall *ptr_glBindTexture) (GLenum target, GLuint texture);
void (__stdcall *ptr_glBitmap) (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
void (__stdcall *ptr_glBlendFunc) (GLenum sfactor, GLenum dfactor);
void (__stdcall *ptr_glBufferDataARB) (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
void (__stdcall *ptr_glBufferSubDataARB) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
void (__stdcall *ptr_glCallList) (GLuint list);
void (__stdcall *ptr_glCallLists) (GLsizei n, GLenum type, const GLvoid *lists);
void (__stdcall *ptr_glClear) (GLbitfield mask);
void (__stdcall *ptr_glClearAccum) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void (__stdcall *ptr_glClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (__stdcall *ptr_glClearDepth) (GLclampd depth);
void (__stdcall *ptr_glClearIndex) (GLfloat c);
void (__stdcall *ptr_glClearStencil) (GLint s);
void (__stdcall *ptr_glClipPlane) (GLenum plane, const GLdouble *equation);
void (__stdcall *ptr_glColor3b) (GLbyte red, GLbyte green, GLbyte blue);
void (__stdcall *ptr_glColor3bv) (const GLbyte *v);
void (__stdcall *ptr_glColor3d) (GLdouble red, GLdouble green, GLdouble blue);
void (__stdcall *ptr_glColor3dv) (const GLdouble *v);
void (__stdcall *ptr_glColor3f) (GLfloat red, GLfloat green, GLfloat blue);
void (__stdcall *ptr_glColor3fv) (const GLfloat *v);
void (__stdcall *ptr_glColor3i) (GLint red, GLint green, GLint blue);
void (__stdcall *ptr_glColor3iv) (const GLint *v);
void (__stdcall *ptr_glColor3s) (GLshort red, GLshort green, GLshort blue);
void (__stdcall *ptr_glColor3sv) (const GLshort *v);
void (__stdcall *ptr_glColor3ub) (GLubyte red, GLubyte green, GLubyte blue);
void (__stdcall *ptr_glColor3ubv) (const GLubyte *v);
void (__stdcall *ptr_glColor3ui) (GLuint red, GLuint green, GLuint blue);
void (__stdcall *ptr_glColor3uiv) (const GLuint *v);
void (__stdcall *ptr_glColor3us) (GLushort red, GLushort green, GLushort blue);
void (__stdcall *ptr_glColor3usv) (const GLushort *v);
void (__stdcall *ptr_glColor4b) (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void (__stdcall *ptr_glColor4bv) (const GLbyte *v);
void (__stdcall *ptr_glColor4d) (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void (__stdcall *ptr_glColor4dv) (const GLdouble *v);
void (__stdcall *ptr_glColor4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void (__stdcall *ptr_glColor4fv) (const GLfloat *v);
void (__stdcall *ptr_glColor4i) (GLint red, GLint green, GLint blue, GLint alpha);
void (__stdcall *ptr_glColor4iv) (const GLint *v);
void (__stdcall *ptr_glColor4s) (GLshort red, GLshort green, GLshort blue, GLshort alpha);
void (__stdcall *ptr_glColor4sv) (const GLshort *v);
void (__stdcall *ptr_glColor4ub) (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void (__stdcall *ptr_glColor4ubv) (const GLubyte *v);
void (__stdcall *ptr_glColor4ui) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
void (__stdcall *ptr_glColor4uiv) (const GLuint *v);
void (__stdcall *ptr_glColor4us) (GLushort red, GLushort green, GLushort blue, GLushort alpha);
void (__stdcall *ptr_glColor4usv) (const GLushort *v);
void (__stdcall *ptr_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void (__stdcall *ptr_glColorMaterial) (GLenum face, GLenum mode);
void (__stdcall *ptr_glColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glCopyPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
void (__stdcall *ptr_glCopyTexImage1D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void (__stdcall *ptr_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void (__stdcall *ptr_glCopyTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void (__stdcall *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void (__stdcall *ptr_glCullFace) (GLenum mode);
void (__stdcall *ptr_glDeleteLists) (GLuint list, GLsizei range);
void (__stdcall *ptr_glDeleteTextures) (GLsizei n, const GLuint *textures);
void (__stdcall *ptr_glDepthFunc) (GLenum func);
void (__stdcall *ptr_glDepthMask) (GLboolean flag);
void (__stdcall *ptr_glDepthRange) (GLclampd zNear, GLclampd zFar);
void (__stdcall *ptr_glDisable) (GLenum cap);
void (__stdcall *ptr_glDisableClientState) (GLenum array);
void (__stdcall *ptr_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
void (__stdcall *ptr_glDrawBuffer) (GLenum mode);
void (__stdcall *ptr_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
void (__stdcall *ptr_glDrawPixels) (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
//void (__stdcall *ptr_glDebugEntry) (DWORD dwArg1, DWORD dwArg2);
void (__stdcall *ptr_glEdgeFlag) (GLboolean flag);
void (__stdcall *ptr_glEdgeFlagv) (const GLboolean *flag);
void (__stdcall *ptr_glEdgeFlagPointer) (GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glEnable) (GLenum cap);
void (__stdcall *ptr_glEnableClientState) (GLenum array);
void (__stdcall *ptr_glEnd) (void);
void (__stdcall *ptr_glEndList) (void);
void (__stdcall *ptr_glEvalCoord1d) (GLdouble u);
void (__stdcall *ptr_glEvalCoord1dv) (const GLdouble *u);
void (__stdcall *ptr_glEvalCoord1f) (GLfloat u);
void (__stdcall *ptr_glEvalCoord1fv) (const GLfloat *u);
void (__stdcall *ptr_glEvalCoord2d) (GLdouble u, GLdouble v);
void (__stdcall *ptr_glEvalCoord2dv) (const GLdouble *u);
void (__stdcall *ptr_glEvalCoord2f) (GLfloat u, GLfloat v);
void (__stdcall *ptr_glEvalCoord2fv) (const GLfloat *u);
void (__stdcall *ptr_glEvalMesh1) (GLenum mode, GLint i1, GLint i2);
void (__stdcall *ptr_glEvalMesh2) (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void (__stdcall *ptr_glEvalPoint1) (GLint i);
void (__stdcall *ptr_glEvalPoint2) (GLint i, GLint j);
void (__stdcall *ptr_glFeedbackBuffer) (GLsizei size, GLenum type, GLfloat *buffer);
void (__stdcall *ptr_glFinish) (void);
void (__stdcall *ptr_glFlush) (void);
void (__stdcall *ptr_glFogf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glFogfv) (GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glFogi) (GLenum pname, GLint param);
void (__stdcall *ptr_glFogiv) (GLenum pname, const GLint *params);
void (__stdcall *ptr_glFrontFace) (GLenum mode);
void (__stdcall *ptr_glFrustum) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void (__stdcall *ptr_glGenBuffersARB) (GLsizei n, GLuint *buffers);
GLuint (__stdcall *ptr_glGenLists) (GLsizei range);
void (__stdcall *ptr_glGenTextures) (GLsizei n, GLuint *textures);
void (__stdcall *ptr_glGetBooleanv) (GLenum pname, GLboolean *params);
void (__stdcall *ptr_glGetDoublev) (GLenum pname, GLdouble *params);
void (__stdcall *ptr_glGetFloatv) (GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetIntegerv) (GLenum pname, GLint *params);
void (__stdcall *ptr_glGetClipPlane) (GLenum plane, GLdouble *equation);
GLenum (__stdcall *ptr_glGetError) (void);
void (__stdcall *ptr_glGetLightfv) (GLenum light, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetLightiv) (GLenum light, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetMapdv) (GLenum target, GLenum query, GLdouble *v);
void (__stdcall *ptr_glGetMapfv) (GLenum target, GLenum query, GLfloat *v);
void (__stdcall *ptr_glGetMapiv) (GLenum target, GLenum query, GLint *v);
void (__stdcall *ptr_glGetMaterialfv) (GLenum face, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetMaterialiv) (GLenum face, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetPixelMapfv) (GLenum map, GLfloat *values);
void (__stdcall *ptr_glGetPixelMapuiv) (GLenum map, GLuint *values);
void (__stdcall *ptr_glGetPixelMapusv) (GLenum map, GLushort *values);
void (__stdcall *ptr_glGetPointerv) (GLenum pname, GLvoid **params);
void (__stdcall *ptr_glGetPolygonStipple) (GLubyte *mask);
const GLubyte* (__stdcall *ptr_glGetString) (GLenum name);
void (__stdcall *ptr_glGetTexEnvfv) (GLenum target, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetTexEnviv) (GLenum target, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetTexGendv) (GLenum coord, GLenum pname, GLdouble *params);
void (__stdcall *ptr_glGetTexGenfv) (GLenum coord, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetTexGeniv) (GLenum coord, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetTexImage) (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
void (__stdcall *ptr_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
void (__stdcall *ptr_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
void (__stdcall *ptr_glHint) (GLenum target, GLenum mode);
void (__stdcall *ptr_glIndexd) (GLdouble c);
void (__stdcall *ptr_glIndexdv) (const GLdouble *c);
void (__stdcall *ptr_glIndexf) (GLfloat c);
void (__stdcall *ptr_glIndexfv) (const GLfloat *c);
void (__stdcall *ptr_glIndexi) (GLint c);
void (__stdcall *ptr_glIndexiv) (const GLint *c);
void (__stdcall *ptr_glIndexs) (GLshort c);
void (__stdcall *ptr_glIndexsv) (const GLshort *c);
void (__stdcall *ptr_glIndexub) (GLubyte c);
void (__stdcall *ptr_glIndexubv) (const GLubyte *c);
void (__stdcall *ptr_glIndexMask) (GLuint mask);
void (__stdcall *ptr_glIndexPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glInitNames) (void);
void (__stdcall *ptr_glInterleavedArrays) (GLenum format, GLsizei stride, const GLvoid *pointer);
GLboolean (__stdcall *ptr_glIsEnabled) (GLenum cap);
GLboolean (__stdcall *ptr_glIsList) (GLuint list);
GLboolean (__stdcall *ptr_glIsTexture) (GLuint texture);
void (__stdcall *ptr_glLightf) (GLenum light, GLenum pname, GLfloat param);
void (__stdcall *ptr_glLightfv) (GLenum light, GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glLighti) (GLenum light, GLenum pname, GLint param);
void (__stdcall *ptr_glLightiv) (GLenum light, GLenum pname, const GLint *params);
void (__stdcall *ptr_glLightModelf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glLightModelfv) (GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glLightModeli) (GLenum pname, GLint param);
void (__stdcall *ptr_glLightModeliv) (GLenum pname, const GLint *params);
void (__stdcall *ptr_glLineStipple) (GLint factor, GLushort pattern);
void (__stdcall *ptr_glLineWidth) (GLfloat width);
void (__stdcall *ptr_glListBase) (GLuint base);
void (__stdcall *ptr_glLoadIdentity) (void);
void (__stdcall *ptr_glLoadMatrixd) (const GLdouble *m);
void (__stdcall *ptr_glLoadMatrixf) (const GLfloat *m);
void (__stdcall *ptr_glLoadName) (GLuint name);
void (__stdcall *ptr_glLogicOp) (GLenum opcode);
void (__stdcall *ptr_glMap1d) (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
void (__stdcall *ptr_glMap1f) (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
void (__stdcall *ptr_glMap2d) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
void (__stdcall *ptr_glMap2f) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
void (__stdcall *ptr_glMapGrid1d) (GLint un, GLdouble u1, GLdouble u2);
void (__stdcall *ptr_glMapGrid1f) (GLint un, GLfloat u1, GLfloat u2);
void (__stdcall *ptr_glMapGrid2d) (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void (__stdcall *ptr_glMapGrid2f) (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void (__stdcall *ptr_glMaterialf) (GLenum face, GLenum pname, GLfloat param);
void (__stdcall *ptr_glMaterialfv) (GLenum face, GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glMateriali) (GLenum face, GLenum pname, GLint param);
void (__stdcall *ptr_glMaterialiv) (GLenum face, GLenum pname, const GLint *params);
void (__stdcall *ptr_glMatrixMode) (GLenum mode);
void (__stdcall *ptr_glMultiTexCoord2fARB) (GLenum target, GLfloat s, GLfloat t);
void (__stdcall *ptr_glMultMatrixd) (const GLdouble *m);
void (__stdcall *ptr_glMultMatrixf) (const GLfloat *m);
void (__stdcall *ptr_glNewList) (GLuint list, GLenum mode);
void (__stdcall *ptr_glNormal3b) (GLbyte nx, GLbyte ny, GLbyte nz);
void (__stdcall *ptr_glNormal3bv) (const GLbyte *v);
void (__stdcall *ptr_glNormal3d) (GLdouble nx, GLdouble ny, GLdouble nz);
void (__stdcall *ptr_glNormal3dv) (const GLdouble *v);
void (__stdcall *ptr_glNormal3f) (GLfloat nx, GLfloat ny, GLfloat nz);
void (__stdcall *ptr_glNormal3fv) (const GLfloat *v);
void (__stdcall *ptr_glNormal3i) (GLint nx, GLint ny, GLint nz);
void (__stdcall *ptr_glNormal3iv) (const GLint *v);
void (__stdcall *ptr_glNormal3s) (GLshort nx, GLshort ny, GLshort nz);
void (__stdcall *ptr_glNormal3sv) (const GLshort *v);
void (__stdcall *ptr_glNormalPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glOrtho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void (__stdcall *ptr_glPassThrough) (GLfloat token);
void (__stdcall *ptr_glPixelMapfv) (GLenum map, GLsizei mapsize, const GLfloat *values);
void (__stdcall *ptr_glPixelMapuiv) (GLenum map, GLsizei mapsize, const GLuint *values);
void (__stdcall *ptr_glPixelMapusv) (GLenum map, GLsizei mapsize, const GLushort *values);
void (__stdcall *ptr_glPixelStoref) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glPixelStorei) (GLenum pname, GLint para);
void (__stdcall *ptr_glPixelTransferf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glPixelTransferi) (GLenum pname, GLint param);
void (__stdcall *ptr_glPixelZoom) (GLfloat xfactor, GLfloat yfactor);
void (__stdcall *ptr_glPointSize) (GLfloat size);
void (__stdcall *ptr_glPolygonMode) (GLenum face, GLenum mode);
void (__stdcall *ptr_glPolygonOffset) (GLfloat factor, GLfloat units);
void (__stdcall *ptr_glPolygonStipple) (const GLubyte *mask);
void (__stdcall *ptr_glPopAttrib) (void);
void (__stdcall *ptr_glPopClientAttrib) (void);
void (__stdcall *ptr_glPopMatrix) (void);
void (__stdcall *ptr_glPopName) (void);
void (__stdcall *ptr_glPrioritizeTextures) (GLsizei n, const GLuint *textures, const GLclampf *priorities);
void (__stdcall *ptr_glPushAttrib) (GLbitfield mask);
void (__stdcall *ptr_glPushClientAttrib) (GLbitfield mask);
void (__stdcall *ptr_glPushMatrix) (void);
void (__stdcall *ptr_glPushName) (GLuint name);
void (__stdcall *ptr_glRasterPos2d) (GLdouble x, GLdouble y);
void (__stdcall *ptr_glRasterPos2dv) (const GLdouble *v);
void (__stdcall *ptr_glRasterPos2f) (GLfloat x, GLfloat y);
void (__stdcall *ptr_glRasterPos2fv) (const GLfloat *v);
void (__stdcall *ptr_glRasterPos2i) (GLint x, GLint y);
void (__stdcall *ptr_glRasterPos2iv) (const GLint *v);
void (__stdcall *ptr_glRasterPos2s) (GLshort x, GLshort y);
void (__stdcall *ptr_glRasterPos2sv) (const GLshort *v);
void (__stdcall *ptr_glRasterPos3d) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glRasterPos3dv) (const GLdouble *v);
void (__stdcall *ptr_glRasterPos3f) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glRasterPos3fv) (const GLfloat *v);
void (__stdcall *ptr_glRasterPos3i) (GLint x, GLint y, GLint z);
void (__stdcall *ptr_glRasterPos3iv) (const GLint *v);
void (__stdcall *ptr_glRasterPos3s) (GLshort x, GLshort y, GLshort z);
void (__stdcall *ptr_glRasterPos3sv) (const GLshort *v);
void (__stdcall *ptr_glRasterPos4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (__stdcall *ptr_glRasterPos4dv) (const GLdouble *v);
void (__stdcall *ptr_glRasterPos4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glRasterPos4fv) (const GLfloat *v);
void (__stdcall *ptr_glRasterPos4i) (GLint x, GLint y, GLint z, GLint w);
void (__stdcall *ptr_glRasterPos4iv) (const GLint *v);
void (__stdcall *ptr_glRasterPos4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void (__stdcall *ptr_glRasterPos4sv) (const GLshort *v);
void (__stdcall *ptr_glReadBuffer) (GLenum mode);
void (__stdcall *ptr_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
void (__stdcall *ptr_glRectd) (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void (__stdcall *ptr_glRectdv) (const GLdouble *v1, const GLdouble *v2);
void (__stdcall *ptr_glRectf) (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void (__stdcall *ptr_glRectfv) (const GLfloat *v1, const GLfloat *v2);
void (__stdcall *ptr_glRecti) (GLint x1, GLint y1, GLint x2, GLint y2);
void (__stdcall *ptr_glRectiv) (const GLint *v1, const GLint *v2);
void (__stdcall *ptr_glRects) (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void (__stdcall *ptr_glRectsv) (const GLshort *v1, const GLshort *v2);
GLint (__stdcall *ptr_glRenderMode) (GLenum mode);
void (__stdcall *ptr_glRotated) (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glRotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glScaled) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glScalef) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
void (__stdcall *ptr_glSelectBuffer) (GLsizei size, GLuint *buffer);
void (__stdcall *ptr_glShadeModel) (GLenum mode);
void (__stdcall *ptr_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
void (__stdcall *ptr_glStencilMask) (GLuint mask);
void (__stdcall *ptr_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);
void (__stdcall *ptr_glTexCoord1d) (GLdouble s);
void (__stdcall *ptr_glTexCoord1dv) (const GLdouble *v);
void (__stdcall *ptr_glTexCoord1f) (GLfloat s);
void (__stdcall *ptr_glTexCoord1fv) (const GLfloat *v);
void (__stdcall *ptr_glTexCoord1i) (GLint s);
void (__stdcall *ptr_glTexCoord1iv) (const GLint *v);
void (__stdcall *ptr_glTexCoord1s) (GLshort s);
void (__stdcall *ptr_glTexCoord1sv) (const GLshort *v);
void (__stdcall *ptr_glTexCoord2d) (GLdouble s, GLdouble t);
void (__stdcall *ptr_glTexCoord2dv) (const GLdouble *v);
void (__stdcall *ptr_glTexCoord2f) (GLfloat s,  GLfloat t);
void (__stdcall *ptr_glTexCoord2fv) (const GLfloat *v);
void (__stdcall *ptr_glTexCoord2i) (GLint s, GLint t);
void (__stdcall *ptr_glTexCoord2iv) (const GLint *v);
void (__stdcall *ptr_glTexCoord2s) (GLshort s, GLshort t);
void (__stdcall *ptr_glTexCoord2sv) (const GLshort *v);
void (__stdcall *ptr_glTexCoord3d) (GLdouble s, GLdouble t, GLdouble r);
void (__stdcall *ptr_glTexCoord3dv) (const GLdouble *v);
void (__stdcall *ptr_glTexCoord3f) (GLfloat s, GLfloat t, GLfloat r);
void (__stdcall *ptr_glTexCoord3fv) (const GLfloat *v);
void (__stdcall *ptr_glTexCoord3i) (GLint s, GLint t, GLint r);
void (__stdcall *ptr_glTexCoord3iv) (const GLint *v);
void (__stdcall *ptr_glTexCoord3s) (GLshort s, GLshort t, GLshort r);
void (__stdcall *ptr_glTexCoord3sv) (const GLshort *v);
void (__stdcall *ptr_glTexCoord4d) (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void (__stdcall *ptr_glTexCoord4dv) (const GLdouble *v);
void (__stdcall *ptr_glTexCoord4f) (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void (__stdcall *ptr_glTexCoord4fv) (const GLfloat *v);
void (__stdcall *ptr_glTexCoord4i) (GLint s, GLint t, GLint r, GLint q);
void (__stdcall *ptr_glTexCoord4iv) (const GLint *v);
void (__stdcall *ptr_glTexCoord4s) (GLshort s, GLshort t, GLshort r, GLshort q);
void (__stdcall *ptr_glTexCoord4sv) (const GLshort *v);
void (__stdcall *ptr_glTexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glTexEnvf) (GLenum target, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexEnvfv) (GLenum target, GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glTexEnvi) (GLenum target, GLenum pname, GLint param);
void (__stdcall *ptr_glTexEnviv) (GLenum target, GLenum pname, const GLint *params);
void (__stdcall *ptr_glTexGend) (GLenum coord, GLenum pname, GLdouble param);
void (__stdcall *ptr_glTexGendv) (GLenum coord, GLenum pname, const GLdouble *params);
void (__stdcall *ptr_glTexGenf) (GLenum coord, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexGenfv) (GLenum coord, GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glTexGeni) (GLenum coord, GLenum pname, GLint param);
void (__stdcall *ptr_glTexGeniv) (GLenum coord, GLenum pname, const GLint *params);
void (__stdcall *ptr_glTexImage1D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
void (__stdcall *ptr_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
void (__stdcall *ptr_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
void (__stdcall *ptr_glTexParameteri) (GLenum target, GLenum pname, GLint param);
void (__stdcall *ptr_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
void (__stdcall *ptr_glTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
void (__stdcall *ptr_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type,const GLvoid *pixels);
void (__stdcall *ptr_glTranslated) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glTranslatef) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glVertex2d) (GLdouble x, GLdouble y);
void (__stdcall *ptr_glVertex2dv) (const GLdouble *v);
void (__stdcall *ptr_glVertex2f) (GLfloat x, GLfloat y);
void (__stdcall *ptr_glVertex2fv) (const GLfloat *v);
void (__stdcall *ptr_glVertex2i) (GLint x, GLint y);
void (__stdcall *ptr_glVertex2iv) (const GLint *v);
void (__stdcall *ptr_glVertex2s) (GLshort x, GLshort y);
void (__stdcall *ptr_glVertex2sv) (const GLshort *v);
void (__stdcall *ptr_glVertex3d) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glVertex3dv) (const GLdouble *v);
void (__stdcall *ptr_glVertex3f) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glVertex3fv) (const GLfloat *v);
void (__stdcall *ptr_glVertex3i) (GLint x, GLint y, GLint z);
void (__stdcall *ptr_glVertex3iv) (const GLint *v);
void (__stdcall *ptr_glVertex3s) (GLshort x, GLshort y, GLshort z);
void (__stdcall *ptr_glVertex3sv) (const GLshort *v);
void (__stdcall *ptr_glVertex4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (__stdcall *ptr_glVertex4dv) (const GLdouble *v);
void (__stdcall *ptr_glVertex4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glVertex4fv) (const GLfloat *v);
void (__stdcall *ptr_glVertex4i) (GLint x, GLint y, GLint z, GLint w);
void (__stdcall *ptr_glVertex4iv) (const GLint *v);
void (__stdcall *ptr_glVertex4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void (__stdcall *ptr_glVertex4sv) (const GLshort *v);
void (__stdcall *ptr_glVertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (__stdcall *ptr_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);

#if defined _WIN32 || defined _WIN64
int (__stdcall *ptr_wglChoosePixelFormat) (HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd);
HGLRC (__stdcall *ptr_wglCreateContext) (HDC hdc);
HGLRC (__stdcall *ptr_wglCreateLayerContext) (HDC hdc, int iLayerPlane);
BOOL (__stdcall *ptr_wglCopyContext) (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
BOOL (__stdcall *ptr_wglDeleteContext) (HGLRC hglrc);
BOOL (__stdcall *ptr_wglDescribeLayerPlane) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd);
int (__stdcall *ptr_wglDescribePixelFormat) (HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd);
HGLRC (__stdcall *ptr_wglGetCurrentContext) (void);
HDC (__stdcall *ptr_wglGetCurrentDC) (void);
PROC (__stdcall *ptr_wglGetDefaultProcAddress) (LPCSTR lpszProc);
int (__stdcall *ptr_wglGetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr);
int (__stdcall *ptr_wglGetPixelFormat) (HDC hdc);
PROC (__stdcall *ptr_wglGetProcAddress) (LPCSTR lpszProc);
BOOL (__stdcall *ptr_wglMakeCurrent) (HDC hdc, HGLRC hglrc);
BOOL (__stdcall *ptr_wglRealizeLayerPalette) (HDC hdc, int iLayerPlane, BOOL bRealize);
int (__stdcall *ptr_wglSetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
BOOL (__stdcall *ptr_wglSetPixelFormat) (HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd);
BOOL (__stdcall *ptr_wglShareLists) (HGLRC hglrc1, HGLRC hglrc2);
BOOL (__stdcall *ptr_wglSwapBuffers) (HDC hdc);
BOOL (__stdcall *ptr_wglSwapLayerBuffers) (HDC hdc, UINT fuPlanes);
DWORD (__stdcall *ptr_wglSwapMultipleBuffers) (UINT dwArg1, CONST WGLSWAP* dwArg2);
BOOL (__stdcall *ptr_wglUseFontBitmapsW) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL (__stdcall *ptr_wglUseFontBitmapsA) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL (__stdcall *ptr_wglUseFontOutlinesW) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL (__stdcall *ptr_wglUseFontOutlinesA) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

#else

XVisualInfo* (*ptr_glXChooseVisual) (Display* dpy, int screen, int* attribList);
GLXContext (*ptr_glXCreateContext) (Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct);
void (*ptr_glXDestroyContext) (Display* dpy, GLXContext ctx);
Bool (*ptr_glXMakeCurrent) (Display* dpy, GLXDrawable drawable, GLXContext ctx);
void (*ptr_glXCopyContext) (Display* dpy, GLXContext src, GLXContext dst, unsigned long mask);
void (*ptr_glXSwapBuffers) (Display* dpy, GLXDrawable drawable);
GLXPixmap (*ptr_glXCreateGLXPixmap) (Display* dpy, XVisualInfo* visual, Pixmap pixmap);
void (*ptr_glXDestroyGLXPixmap) (Display* dpy, GLXPixmap pixmap);
Bool (*ptr_glXQueryExtension) (Display* dpy, int* errorb, int* event);
Bool (*ptr_glXQueryVersion) (Display* dpy, int* maj, int* min);
Bool (*ptr_glXIsDirect) (Display* dpy, GLXContext ctx);
int (*ptr_glXGetConfig) (Display* dpy, XVisualInfo* visual, int attrib, int* value);
GLXContext (*ptr_glXGetCurrentContext) (void);
GLXDrawable (*ptr_glXGetCurrentDrawable) (void);
void (*ptr_glXWaitGL) (void);
void (*ptr_glXWaitX) (void);
void (*ptr_glXUseXFont) (Font font, int first, int count, int list);
#endif


bool __stdcall Initialize(void)
{
    char Root[256];
    #if defined _WIN32 || defined _WIN64
        GetSystemDirectoryA(Root, 256);
    #ifdef _MSC_VER
        std::strcat_s(Root, "\\opengl32.dll");
    #else
        std::strcat(Root, "\\opengl32.dll");
    #endif
    #else
        std::strcat(Root, "/usr/lib");
        std::strcat(Root, "/libGL.so");
    #endif

    OriginalGL = new Library(Root);
	try
	{
		OriginalGL->FunctionAddress(ptr_glAccum, "glAccum");
		OriginalGL->FunctionAddress(ptr_glAlphaFunc, "glAlphaFunc");
		OriginalGL->FunctionAddress(ptr_glAreTexturesResident, "glAreTexturesResident");
		OriginalGL->FunctionAddress(ptr_glArrayElement, "glArrayElement");
		OriginalGL->FunctionAddress(ptr_glBegin, "glBegin");
		OriginalGL->FunctionAddress(ptr_glBindTexture, "glBindTexture");
		OriginalGL->FunctionAddress(ptr_glBitmap, "glBitmap");
		OriginalGL->FunctionAddress(ptr_glBlendFunc, "glBlendFunc");
		OriginalGL->FunctionAddress(ptr_glCallList, "glCallList");
		OriginalGL->FunctionAddress(ptr_glCallLists, "glCallLists");
		OriginalGL->FunctionAddress(ptr_glClear, "glClear");
		OriginalGL->FunctionAddress(ptr_glClearAccum, "glClearAccum");
		OriginalGL->FunctionAddress(ptr_glClearColor, "glClearColor");
		OriginalGL->FunctionAddress(ptr_glClearDepth, "glClearDepth");
		OriginalGL->FunctionAddress(ptr_glClearIndex, "glClearIndex");
		OriginalGL->FunctionAddress(ptr_glClearStencil, "glClearStencil");
		OriginalGL->FunctionAddress(ptr_glClipPlane, "glClipPlane");
		OriginalGL->FunctionAddress(ptr_glColor3b, "glColor3b");
		OriginalGL->FunctionAddress(ptr_glColor3bv, "glColor3bv");
		OriginalGL->FunctionAddress(ptr_glColor3d, "glColor3d");
		OriginalGL->FunctionAddress(ptr_glColor3dv, "glColor3dv");
		OriginalGL->FunctionAddress(ptr_glColor3f, "glColor3f");
		OriginalGL->FunctionAddress(ptr_glColor3fv, "glColor3fv");
		OriginalGL->FunctionAddress(ptr_glColor3i, "glColor3i");
		OriginalGL->FunctionAddress(ptr_glColor3iv, "glColor3iv");
		OriginalGL->FunctionAddress(ptr_glColor3s, "glColor3s");
		OriginalGL->FunctionAddress(ptr_glColor3sv, "glColor3sv");
		OriginalGL->FunctionAddress(ptr_glColor3ub, "glColor3ub");
		OriginalGL->FunctionAddress(ptr_glColor3ubv, "glColor3ubv");
		OriginalGL->FunctionAddress(ptr_glColor3ui, "glColor3ui");
		OriginalGL->FunctionAddress(ptr_glColor3uiv, "glColor3uiv");
		OriginalGL->FunctionAddress(ptr_glColor3us, "glColor3us");
		OriginalGL->FunctionAddress(ptr_glColor3usv, "glColor3usv");
		OriginalGL->FunctionAddress(ptr_glColor4b, "glColor4b");
		OriginalGL->FunctionAddress(ptr_glColor4bv, "glColor4bv");
		OriginalGL->FunctionAddress(ptr_glColor4d, "glColor4d");
		OriginalGL->FunctionAddress(ptr_glColor4dv, "glColor4dv");
		OriginalGL->FunctionAddress(ptr_glColor4f, "glColor4f");
		OriginalGL->FunctionAddress(ptr_glColor4fv, "glColor4fv");
		OriginalGL->FunctionAddress(ptr_glColor4i, "glColor4i");
		OriginalGL->FunctionAddress(ptr_glColor4iv, "glColor4iv");
		OriginalGL->FunctionAddress(ptr_glColor4s, "glColor4s");
		OriginalGL->FunctionAddress(ptr_glColor4sv, "glColor4sv");
		OriginalGL->FunctionAddress(ptr_glColor4ub, "glColor4ub");
		OriginalGL->FunctionAddress(ptr_glColor4ubv, "glColor4ubv");
		OriginalGL->FunctionAddress(ptr_glColor4ui, "glColor4ui");
		OriginalGL->FunctionAddress(ptr_glColor4uiv, "glColor4uiv");
		OriginalGL->FunctionAddress(ptr_glColor4us, "glColor4us");
		OriginalGL->FunctionAddress(ptr_glColor4usv, "glColor4usv");
		OriginalGL->FunctionAddress(ptr_glColorMask, "glColorMask");
		OriginalGL->FunctionAddress(ptr_glColorMaterial, "glColorMaterial");
		OriginalGL->FunctionAddress(ptr_glColorPointer, "glColorPointer");
		OriginalGL->FunctionAddress(ptr_glCopyPixels, "glCopyPixels");
		OriginalGL->FunctionAddress(ptr_glCopyTexImage1D, "glCopyTexImage1D");
		OriginalGL->FunctionAddress(ptr_glCopyTexImage2D, "glCopyTexImage2D");
		OriginalGL->FunctionAddress(ptr_glCopyTexSubImage1D, "glCopyTexSubImage1D");
		OriginalGL->FunctionAddress(ptr_glCopyTexSubImage2D, "glCopyTexSubImage2D");
		OriginalGL->FunctionAddress(ptr_glCullFace, "glCullFace");
		OriginalGL->FunctionAddress(ptr_glDeleteLists, "glDeleteLists");
		OriginalGL->FunctionAddress(ptr_glDeleteTextures, "glDeleteTextures");
		OriginalGL->FunctionAddress(ptr_glDepthFunc, "glDepthFunc");
		OriginalGL->FunctionAddress(ptr_glDepthMask, "glDepthMask");
		OriginalGL->FunctionAddress(ptr_glDepthRange, "glDepthRange");
		OriginalGL->FunctionAddress(ptr_glDisable, "glDisable");
		OriginalGL->FunctionAddress(ptr_glDisableClientState, "glDisableClientState");
		OriginalGL->FunctionAddress(ptr_glDrawArrays, "glDrawArrays");
		OriginalGL->FunctionAddress(ptr_glDrawBuffer, "glDrawBuffer");
		OriginalGL->FunctionAddress(ptr_glDrawElements, "glDrawElements");
		OriginalGL->FunctionAddress(ptr_glDrawPixels, "glDrawPixels");
		//OriginalGL->FunctionAddress(ptr_glDebugEntry, "glDebugEntry");
		OriginalGL->FunctionAddress(ptr_glEdgeFlag, "glEdgeFlag");
		OriginalGL->FunctionAddress(ptr_glEdgeFlagv, "glEdgeFlagv");
		OriginalGL->FunctionAddress(ptr_glEdgeFlagPointer, "glEdgeFlagPointer");
		OriginalGL->FunctionAddress(ptr_glEnable, "glEnable");
		OriginalGL->FunctionAddress(ptr_glEnableClientState, "glEnableClientState");
		OriginalGL->FunctionAddress(ptr_glEnd, "glEnd");
		OriginalGL->FunctionAddress(ptr_glEndList, "glEndList");
		OriginalGL->FunctionAddress(ptr_glEvalCoord1d, "glEvalCoord1d");
		OriginalGL->FunctionAddress(ptr_glEvalCoord1dv, "glEvalCoord1dv");
		OriginalGL->FunctionAddress(ptr_glEvalCoord1f, "glEvalCoord1f");
		OriginalGL->FunctionAddress(ptr_glEvalCoord1fv, "glEvalCoord1fv");
		OriginalGL->FunctionAddress(ptr_glEvalCoord2d, "glEvalCoord2d");
		OriginalGL->FunctionAddress(ptr_glEvalCoord2dv, "glEvalCoord2dv");
		OriginalGL->FunctionAddress(ptr_glEvalCoord2f, "glEvalCoord2f");
		OriginalGL->FunctionAddress(ptr_glEvalCoord2fv, "glEvalCoord2fv");
		OriginalGL->FunctionAddress(ptr_glEvalMesh1, "glEvalMesh1");
		OriginalGL->FunctionAddress(ptr_glEvalMesh2, "glEvalMesh2");
		OriginalGL->FunctionAddress(ptr_glEvalPoint1, "glEvalPoint1");
		OriginalGL->FunctionAddress(ptr_glEvalPoint2, "glEvalPoint2");
		OriginalGL->FunctionAddress(ptr_glFeedbackBuffer, "glFeedbackBuffer");
		OriginalGL->FunctionAddress(ptr_glFinish, "glFinish");
		OriginalGL->FunctionAddress(ptr_glFlush, "glFlush");
		OriginalGL->FunctionAddress(ptr_glFogf, "glFogf");
		OriginalGL->FunctionAddress(ptr_glFogfv, "glFogfv");
		OriginalGL->FunctionAddress(ptr_glFogi, "glFogi");
		OriginalGL->FunctionAddress(ptr_glFogiv, "glFogiv");
		OriginalGL->FunctionAddress(ptr_glFrontFace, "glFrontFace");
		OriginalGL->FunctionAddress(ptr_glFrustum, "glFrustum");
		OriginalGL->FunctionAddress(ptr_glGenLists, "glGenLists");
		OriginalGL->FunctionAddress(ptr_glGenTextures, "glGenTextures");
		OriginalGL->FunctionAddress(ptr_glGetBooleanv, "glGetBooleanv");
		OriginalGL->FunctionAddress(ptr_glGetDoublev, "glGetDoublev");
		OriginalGL->FunctionAddress(ptr_glGetFloatv, "glGetFloatv");
		OriginalGL->FunctionAddress(ptr_glGetIntegerv, "glGetIntegerv");
		OriginalGL->FunctionAddress(ptr_glGetClipPlane, "glGetClipPlane");
		OriginalGL->FunctionAddress(ptr_glGetError, "glGetError");
		OriginalGL->FunctionAddress(ptr_glGetLightfv, "glGetLightfv");
		OriginalGL->FunctionAddress(ptr_glGetLightiv, "glGetLightiv");
		OriginalGL->FunctionAddress(ptr_glGetMapdv, "glGetMapdv");
		OriginalGL->FunctionAddress(ptr_glGetMapfv, "glGetMapfv");
		OriginalGL->FunctionAddress(ptr_glGetMapiv, "glGetMapiv");
		OriginalGL->FunctionAddress(ptr_glGetMaterialfv, "glGetMaterialfv");
		OriginalGL->FunctionAddress(ptr_glGetMaterialiv, "glGetMaterialiv");
		OriginalGL->FunctionAddress(ptr_glGetPixelMapfv, "glGetPixelMapfv");
		OriginalGL->FunctionAddress(ptr_glGetPixelMapuiv, "glGetPixelMapuiv");
		OriginalGL->FunctionAddress(ptr_glGetPixelMapusv, "glGetPixelMapusv");
		OriginalGL->FunctionAddress(ptr_glGetPointerv, "glGetPointerv");
		OriginalGL->FunctionAddress(ptr_glGetPolygonStipple, "glGetPolygonStipple");
		OriginalGL->FunctionAddress(ptr_glGetString, "glGetString");
		OriginalGL->FunctionAddress(ptr_glGetTexEnvfv, "glGetTexEnvfv");
		OriginalGL->FunctionAddress(ptr_glGetTexEnviv, "glGetTexEnviv");
		OriginalGL->FunctionAddress(ptr_glGetTexGendv, "glGetTexGendv");
		OriginalGL->FunctionAddress(ptr_glGetTexGenfv, "glGetTexGenfv");
		OriginalGL->FunctionAddress(ptr_glGetTexGeniv, "glGetTexGeniv");
		OriginalGL->FunctionAddress(ptr_glGetTexImage, "glGetTexImage");
		OriginalGL->FunctionAddress(ptr_glGetTexLevelParameterfv, "glGetTexLevelParameterfv");
		OriginalGL->FunctionAddress(ptr_glGetTexLevelParameteriv, "glGetTexLevelParameteriv");
		OriginalGL->FunctionAddress(ptr_glGetTexParameterfv, "glGetTexParameterfv");
		OriginalGL->FunctionAddress(ptr_glGetTexParameteriv, "glGetTexParameteriv");
		OriginalGL->FunctionAddress(ptr_glHint, "glHint");
		OriginalGL->FunctionAddress(ptr_glIndexd, "glIndexd");
		OriginalGL->FunctionAddress(ptr_glIndexdv, "glIndexdv");
		OriginalGL->FunctionAddress(ptr_glIndexf, "glIndexf");
		OriginalGL->FunctionAddress(ptr_glIndexfv, "glIndexfv");
		OriginalGL->FunctionAddress(ptr_glIndexi, "glIndexi");
		OriginalGL->FunctionAddress(ptr_glIndexiv, "glIndexiv");
		OriginalGL->FunctionAddress(ptr_glIndexs, "glIndexs");
		OriginalGL->FunctionAddress(ptr_glIndexsv, "glIndexsv");
		OriginalGL->FunctionAddress(ptr_glIndexub, "glIndexub");
		OriginalGL->FunctionAddress(ptr_glIndexubv, "glIndexubv");
		OriginalGL->FunctionAddress(ptr_glIndexMask, "glIndexMask");
		OriginalGL->FunctionAddress(ptr_glIndexPointer, "glIndexPointer");
		OriginalGL->FunctionAddress(ptr_glInitNames, "glInitNames");
		OriginalGL->FunctionAddress(ptr_glInterleavedArrays, "glInterleavedArrays");
		OriginalGL->FunctionAddress(ptr_glIsEnabled, "glIsEnabled");
		OriginalGL->FunctionAddress(ptr_glIsList, "glIsList");
		OriginalGL->FunctionAddress(ptr_glIsTexture, "glIsTexture");
		OriginalGL->FunctionAddress(ptr_glLightf, "glLightf");
		OriginalGL->FunctionAddress(ptr_glLightfv, "glLightfv");
		OriginalGL->FunctionAddress(ptr_glLighti, "glLighti");
		OriginalGL->FunctionAddress(ptr_glLightiv, "glLightiv");
		OriginalGL->FunctionAddress(ptr_glLightModelf, "glLightModelf");
		OriginalGL->FunctionAddress(ptr_glLightModelfv, "glLightModelfv");
		OriginalGL->FunctionAddress(ptr_glLightModeli, "glLightModeli");
		OriginalGL->FunctionAddress(ptr_glLightModeliv, "glLightModeliv");
		OriginalGL->FunctionAddress(ptr_glLineStipple, "glLineStipple");
		OriginalGL->FunctionAddress(ptr_glLineWidth, "glLineWidth");
		OriginalGL->FunctionAddress(ptr_glListBase, "glListBase");
		OriginalGL->FunctionAddress(ptr_glLoadIdentity, "glLoadIdentity");
		OriginalGL->FunctionAddress(ptr_glLoadMatrixd, "glLoadMatrixd");
		OriginalGL->FunctionAddress(ptr_glLoadMatrixf, "glLoadMatrixf");
		OriginalGL->FunctionAddress(ptr_glLoadName, "glLoadName");
		OriginalGL->FunctionAddress(ptr_glLogicOp, "glLogicOp");
		OriginalGL->FunctionAddress(ptr_glMap1d, "glMap1d");
		OriginalGL->FunctionAddress(ptr_glMap1f, "glMap1f");
		OriginalGL->FunctionAddress(ptr_glMap2d, "glMap2d");
		OriginalGL->FunctionAddress(ptr_glMap2f, "glMap2f");
		OriginalGL->FunctionAddress(ptr_glMapGrid1d, "glMapGrid1d");
		OriginalGL->FunctionAddress(ptr_glMapGrid1f, "glMapGrid1f");
		OriginalGL->FunctionAddress(ptr_glMapGrid2d, "glMapGrid2d");
		OriginalGL->FunctionAddress(ptr_glMapGrid2f, "glMapGrid2f");
		OriginalGL->FunctionAddress(ptr_glMaterialf, "glMaterialf");
		OriginalGL->FunctionAddress(ptr_glMaterialfv, "glMaterialfv");
		OriginalGL->FunctionAddress(ptr_glMateriali, "glMateriali");
		OriginalGL->FunctionAddress(ptr_glMaterialiv, "glMaterialiv");
		OriginalGL->FunctionAddress(ptr_glMatrixMode, "glMatrixMode");
		OriginalGL->FunctionAddress(ptr_glMultMatrixd, "glMultMatrixd");
		OriginalGL->FunctionAddress(ptr_glMultMatrixf, "glMultMatrixf");
		OriginalGL->FunctionAddress(ptr_glNewList, "glNewList");
		OriginalGL->FunctionAddress(ptr_glNormal3b, "glNormal3b");
		OriginalGL->FunctionAddress(ptr_glNormal3bv, "glNormal3bv");
		OriginalGL->FunctionAddress(ptr_glNormal3d, "glNormal3d");
		OriginalGL->FunctionAddress(ptr_glNormal3dv, "glNormal3dv");
		OriginalGL->FunctionAddress(ptr_glNormal3f, "glNormal3f");
		OriginalGL->FunctionAddress(ptr_glNormal3fv, "glNormal3fv");
		OriginalGL->FunctionAddress(ptr_glNormal3i, "glNormal3i");
		OriginalGL->FunctionAddress(ptr_glNormal3iv, "glNormal3iv");
		OriginalGL->FunctionAddress(ptr_glNormal3s, "glNormal3s");
		OriginalGL->FunctionAddress(ptr_glNormal3sv, "glNormal3sv");
		OriginalGL->FunctionAddress(ptr_glNormalPointer, "glNormalPointer");
		OriginalGL->FunctionAddress(ptr_glOrtho, "glOrtho");
		OriginalGL->FunctionAddress(ptr_glPassThrough, "glPassThrough");
		OriginalGL->FunctionAddress(ptr_glPixelMapfv, "glPixelMapfv");
		OriginalGL->FunctionAddress(ptr_glPixelMapuiv, "glPixelMapuiv");
		OriginalGL->FunctionAddress(ptr_glPixelMapusv, "glPixelMapusv");
		OriginalGL->FunctionAddress(ptr_glPixelStoref, "glPixelStoref");
		OriginalGL->FunctionAddress(ptr_glPixelStorei, "glPixelStorei");
		OriginalGL->FunctionAddress(ptr_glPixelTransferf, "glPixelTransferf");
		OriginalGL->FunctionAddress(ptr_glPixelTransferi, "glPixelTransferi");
		OriginalGL->FunctionAddress(ptr_glPixelZoom, "glPixelZoom");
		OriginalGL->FunctionAddress(ptr_glPointSize, "glPointSize");
		OriginalGL->FunctionAddress(ptr_glPolygonMode, "glPolygonMode");
		OriginalGL->FunctionAddress(ptr_glPolygonOffset, "glPolygonOffset");
		OriginalGL->FunctionAddress(ptr_glPolygonStipple, "glPolygonStipple");
		OriginalGL->FunctionAddress(ptr_glPopAttrib, "glPopAttrib");
		OriginalGL->FunctionAddress(ptr_glPopClientAttrib, "glPopClientAttrib");
		OriginalGL->FunctionAddress(ptr_glPopMatrix, "glPopMatrix");
		OriginalGL->FunctionAddress(ptr_glPopName, "glPopName");
		OriginalGL->FunctionAddress(ptr_glPrioritizeTextures, "glPrioritizeTextures");
		OriginalGL->FunctionAddress(ptr_glPushAttrib, "glPushAttrib");
		OriginalGL->FunctionAddress(ptr_glPushClientAttrib, "glPushClientAttrib");
		OriginalGL->FunctionAddress(ptr_glPushMatrix, "glPushMatrix");
		OriginalGL->FunctionAddress(ptr_glPushName, "glPushName");
		OriginalGL->FunctionAddress(ptr_glRasterPos2d, "glRasterPos2d");
		OriginalGL->FunctionAddress(ptr_glRasterPos2dv, "glRasterPos2dv");
		OriginalGL->FunctionAddress(ptr_glRasterPos2f, "glRasterPos2f");
		OriginalGL->FunctionAddress(ptr_glRasterPos2fv, "glRasterPos2fv");
		OriginalGL->FunctionAddress(ptr_glRasterPos2i, "glRasterPos2i");
		OriginalGL->FunctionAddress(ptr_glRasterPos2iv, "glRasterPos2iv");
		OriginalGL->FunctionAddress(ptr_glRasterPos2s, "glRasterPos2s");
		OriginalGL->FunctionAddress(ptr_glRasterPos2sv, "glRasterPos2sv");
		OriginalGL->FunctionAddress(ptr_glRasterPos3d, "glRasterPos3d");
		OriginalGL->FunctionAddress(ptr_glRasterPos3dv, "glRasterPos3dv");
		OriginalGL->FunctionAddress(ptr_glRasterPos3f, "glRasterPos3f");
		OriginalGL->FunctionAddress(ptr_glRasterPos3fv, "glRasterPos3fv");
		OriginalGL->FunctionAddress(ptr_glRasterPos3i, "glRasterPos3i");
		OriginalGL->FunctionAddress(ptr_glRasterPos3iv, "glRasterPos3iv");
		OriginalGL->FunctionAddress(ptr_glRasterPos3s, "glRasterPos3s");
		OriginalGL->FunctionAddress(ptr_glRasterPos3sv, "glRasterPos3sv");
		OriginalGL->FunctionAddress(ptr_glRasterPos4d, "glRasterPos4d");
		OriginalGL->FunctionAddress(ptr_glRasterPos4dv, "glRasterPos4dv");
		OriginalGL->FunctionAddress(ptr_glRasterPos4f, "glRasterPos4f");
		OriginalGL->FunctionAddress(ptr_glRasterPos4fv, "glRasterPos4fv");
		OriginalGL->FunctionAddress(ptr_glRasterPos4i, "glRasterPos4i");
		OriginalGL->FunctionAddress(ptr_glRasterPos4iv, "glRasterPos4iv");
		OriginalGL->FunctionAddress(ptr_glRasterPos4s, "glRasterPos4s");
		OriginalGL->FunctionAddress(ptr_glRasterPos4sv, "glRasterPos4sv");
		OriginalGL->FunctionAddress(ptr_glReadBuffer, "glReadBuffer");
		OriginalGL->FunctionAddress(ptr_glReadPixels, "glReadPixels");
		OriginalGL->FunctionAddress(ptr_glRectd, "glRectd");
		OriginalGL->FunctionAddress(ptr_glRectdv, "glRectdv");
		OriginalGL->FunctionAddress(ptr_glRectf, "glRectf");
		OriginalGL->FunctionAddress(ptr_glRectfv, "glRectfv");
		OriginalGL->FunctionAddress(ptr_glRecti, "glRecti");
		OriginalGL->FunctionAddress(ptr_glRectiv, "glRectiv");
		OriginalGL->FunctionAddress(ptr_glRects, "glRects");
		OriginalGL->FunctionAddress(ptr_glRectsv, "glRectsv");
		OriginalGL->FunctionAddress(ptr_glRenderMode, "glRenderMode");
		OriginalGL->FunctionAddress(ptr_glRotated, "glRotated");
		OriginalGL->FunctionAddress(ptr_glRotatef, "glRotatef");
		OriginalGL->FunctionAddress(ptr_glScaled, "glScaled");
		OriginalGL->FunctionAddress(ptr_glScalef, "glScalef");
		OriginalGL->FunctionAddress(ptr_glScissor, "glScissor");
		OriginalGL->FunctionAddress(ptr_glSelectBuffer, "glSelectBuffer");
		OriginalGL->FunctionAddress(ptr_glShadeModel, "glShadeModel");
		OriginalGL->FunctionAddress(ptr_glStencilFunc, "glStencilFunc");
		OriginalGL->FunctionAddress(ptr_glStencilMask, "glStencilMask");
		OriginalGL->FunctionAddress(ptr_glStencilOp, "glStencilOp");
		OriginalGL->FunctionAddress(ptr_glTexCoord1d, "glTexCoord1d");
		OriginalGL->FunctionAddress(ptr_glTexCoord1dv, "glTexCoord1dv");
		OriginalGL->FunctionAddress(ptr_glTexCoord1f, "glTexCoord1f");
		OriginalGL->FunctionAddress(ptr_glTexCoord1fv, "glTexCoord1fv");
		OriginalGL->FunctionAddress(ptr_glTexCoord1i, "glTexCoord1i");
		OriginalGL->FunctionAddress(ptr_glTexCoord1iv, "glTexCoord1iv");
		OriginalGL->FunctionAddress(ptr_glTexCoord1s, "glTexCoord1s");
		OriginalGL->FunctionAddress(ptr_glTexCoord1sv, "glTexCoord1sv");
		OriginalGL->FunctionAddress(ptr_glTexCoord2d, "glTexCoord2d");
		OriginalGL->FunctionAddress(ptr_glTexCoord2dv, "glTexCoord2dv");
		OriginalGL->FunctionAddress(ptr_glTexCoord2f, "glTexCoord2f");
		OriginalGL->FunctionAddress(ptr_glTexCoord2fv, "glTexCoord2fv");
		OriginalGL->FunctionAddress(ptr_glTexCoord2i, "glTexCoord2i");
		OriginalGL->FunctionAddress(ptr_glTexCoord2iv, "glTexCoord2iv");
		OriginalGL->FunctionAddress(ptr_glTexCoord2s, "glTexCoord2s");
		OriginalGL->FunctionAddress(ptr_glTexCoord2sv, "glTexCoord2sv");
		OriginalGL->FunctionAddress(ptr_glTexCoord3d, "glTexCoord3d");
		OriginalGL->FunctionAddress(ptr_glTexCoord3dv, "glTexCoord3dv");
		OriginalGL->FunctionAddress(ptr_glTexCoord3f, "glTexCoord3f");
		OriginalGL->FunctionAddress(ptr_glTexCoord3fv, "glTexCoord3fv");
		OriginalGL->FunctionAddress(ptr_glTexCoord3i, "glTexCoord3i");
		OriginalGL->FunctionAddress(ptr_glTexCoord3iv, "glTexCoord3iv");
		OriginalGL->FunctionAddress(ptr_glTexCoord3s, "glTexCoord3s");
		OriginalGL->FunctionAddress(ptr_glTexCoord3sv, "glTexCoord3sv");
		OriginalGL->FunctionAddress(ptr_glTexCoord4d, "glTexCoord4d");
		OriginalGL->FunctionAddress(ptr_glTexCoord4dv, "glTexCoord4dv");
		OriginalGL->FunctionAddress(ptr_glTexCoord4f, "glTexCoord4f");
		OriginalGL->FunctionAddress(ptr_glTexCoord4fv, "glTexCoord4fv");
		OriginalGL->FunctionAddress(ptr_glTexCoord4i, "glTexCoord4i");
		OriginalGL->FunctionAddress(ptr_glTexCoord4iv, "glTexCoord4iv");
		OriginalGL->FunctionAddress(ptr_glTexCoord4s, "glTexCoord4s");
		OriginalGL->FunctionAddress(ptr_glTexCoord4sv, "glTexCoord4sv");
		OriginalGL->FunctionAddress(ptr_glTexCoordPointer, "glTexCoordPointer");
		OriginalGL->FunctionAddress(ptr_glTexEnvf, "glTexEnvf");
		OriginalGL->FunctionAddress(ptr_glTexEnvfv, "glTexEnvfv");
		OriginalGL->FunctionAddress(ptr_glTexEnvi, "glTexEnvi");
		OriginalGL->FunctionAddress(ptr_glTexEnviv, "glTexEnviv");
		OriginalGL->FunctionAddress(ptr_glTexGend, "glTexGend");
		OriginalGL->FunctionAddress(ptr_glTexGendv, "glTexGendv");
		OriginalGL->FunctionAddress(ptr_glTexGenf, "glTexGenf");
		OriginalGL->FunctionAddress(ptr_glTexGenfv, "glTexGenfv");
		OriginalGL->FunctionAddress(ptr_glTexGeni, "glTexGeni");
		OriginalGL->FunctionAddress(ptr_glTexGeniv, "glTexGeniv");
		OriginalGL->FunctionAddress(ptr_glTexImage1D, "glTexImage1D");
		OriginalGL->FunctionAddress(ptr_glTexImage2D, "glTexImage2D");
		OriginalGL->FunctionAddress(ptr_glTexParameterf, "glTexParameterf");
		OriginalGL->FunctionAddress(ptr_glTexParameterfv, "glTexParameterfv");
		OriginalGL->FunctionAddress(ptr_glTexParameteri, "glTexParameteri");
		OriginalGL->FunctionAddress(ptr_glTexParameteriv, "glTexParameteriv");
		OriginalGL->FunctionAddress(ptr_glTexSubImage1D, "glTexSubImage1D");
		OriginalGL->FunctionAddress(ptr_glTexSubImage2D, "glTexSubImage2D");
		OriginalGL->FunctionAddress(ptr_glTranslated, "glTranslated");
		OriginalGL->FunctionAddress(ptr_glTranslatef, "glTranslatef");
		OriginalGL->FunctionAddress(ptr_glVertex2d, "glVertex2d");
		OriginalGL->FunctionAddress(ptr_glVertex2dv, "glVertex2dv");
		OriginalGL->FunctionAddress(ptr_glVertex2f, "glVertex2f");
		OriginalGL->FunctionAddress(ptr_glVertex2fv, "glVertex2fv");
		OriginalGL->FunctionAddress(ptr_glVertex2i, "glVertex2i");
		OriginalGL->FunctionAddress(ptr_glVertex2iv, "glVertex2iv");
		OriginalGL->FunctionAddress(ptr_glVertex2s, "glVertex2s");
		OriginalGL->FunctionAddress(ptr_glVertex2sv, "glVertex2sv");
		OriginalGL->FunctionAddress(ptr_glVertex3d, "glVertex3d");
		OriginalGL->FunctionAddress(ptr_glVertex3dv, "glVertex3dv");
		OriginalGL->FunctionAddress(ptr_glVertex3f, "glVertex3f");
		OriginalGL->FunctionAddress(ptr_glVertex3fv, "glVertex3fv");
		OriginalGL->FunctionAddress(ptr_glVertex3i, "glVertex3i");
		OriginalGL->FunctionAddress(ptr_glVertex3iv, "glVertex3iv");
		OriginalGL->FunctionAddress(ptr_glVertex3s, "glVertex3s");
		OriginalGL->FunctionAddress(ptr_glVertex3sv, "glVertex3sv");
		OriginalGL->FunctionAddress(ptr_glVertex4d, "glVertex4d");
		OriginalGL->FunctionAddress(ptr_glVertex4dv, "glVertex4dv");
		OriginalGL->FunctionAddress(ptr_glVertex4f, "glVertex4f");
		OriginalGL->FunctionAddress(ptr_glVertex4fv, "glVertex4fv");
		OriginalGL->FunctionAddress(ptr_glVertex4i, "glVertex4i");
		OriginalGL->FunctionAddress(ptr_glVertex4iv, "glVertex4iv");
		OriginalGL->FunctionAddress(ptr_glVertex4s, "glVertex4s");
		OriginalGL->FunctionAddress(ptr_glVertex4sv, "glVertex4sv");
		OriginalGL->FunctionAddress(ptr_glVertexPointer, "glVertexPointer");
		OriginalGL->FunctionAddress(ptr_glViewport, "glViewport");

		#if defined _WIN32 || defined _WIN64
		OriginalGL->FunctionAddress(ptr_wglChoosePixelFormat, "wglChoosePixelFormat");
		OriginalGL->FunctionAddress(ptr_wglCreateContext, "wglCreateContext");
		OriginalGL->FunctionAddress(ptr_wglCreateLayerContext, "wglCreateLayerContext");
		OriginalGL->FunctionAddress(ptr_wglCopyContext, "wglCopyContext");
		OriginalGL->FunctionAddress(ptr_wglDeleteContext, "wglDeleteContext");
		OriginalGL->FunctionAddress(ptr_wglDescribeLayerPlane, "wglDescribeLayerPlane");
		OriginalGL->FunctionAddress(ptr_wglDescribePixelFormat, "wglDescribePixelFormat");
		OriginalGL->FunctionAddress(ptr_wglGetCurrentContext, "wglGetCurrentContext");
		OriginalGL->FunctionAddress(ptr_wglGetCurrentDC, "wglGetCurrentDC");
		OriginalGL->FunctionAddress(ptr_wglGetDefaultProcAddress, "wglGetDefaultProcAddress");
		OriginalGL->FunctionAddress(ptr_wglGetLayerPaletteEntries, "wglGetLayerPaletteEntries");
		OriginalGL->FunctionAddress(ptr_wglGetPixelFormat, "wglGetPixelFormat");
		OriginalGL->FunctionAddress(ptr_wglGetProcAddress, "wglGetProcAddress");
		OriginalGL->FunctionAddress(ptr_wglMakeCurrent, "wglMakeCurrent");
		OriginalGL->FunctionAddress(ptr_wglRealizeLayerPalette, "wglRealizeLayerPalette");
		OriginalGL->FunctionAddress(ptr_wglSetLayerPaletteEntries, "wglSetLayerPaletteEntries");
		OriginalGL->FunctionAddress(ptr_wglSetPixelFormat, "wglSetPixelFormat");
		OriginalGL->FunctionAddress(ptr_wglShareLists, "wglShareLists");
		OriginalGL->FunctionAddress(ptr_wglSwapBuffers, "wglSwapBuffers");
		OriginalGL->FunctionAddress(ptr_wglSwapLayerBuffers, "wglSwapLayerBuffers");
		OriginalGL->FunctionAddress(ptr_wglSwapMultipleBuffers, "wglSwapMultipleBuffers");
		OriginalGL->FunctionAddress(ptr_wglUseFontBitmapsW, "wglUseFontBitmapsW");
		OriginalGL->FunctionAddress(ptr_wglUseFontBitmapsA, "wglUseFontBitmapsA");
		OriginalGL->FunctionAddress(ptr_wglUseFontOutlinesW, "wglUseFontOutlinesW");
		OriginalGL->FunctionAddress(ptr_wglUseFontOutlinesA, "wglUseFontOutlinesA");

		#else

        OriginalGL->FunctionAddress(ptr_glXChooseVisual, "glXChooseVisual");
        OriginalGL->FunctionAddress(ptr_glXCreateContext, "glXCreateContext");
        OriginalGL->FunctionAddress(ptr_glXDestroyContext, "glXDestroyContext");
        OriginalGL->FunctionAddress(ptr_glXMakeCurrent, "glXMakeCurrent");
        OriginalGL->FunctionAddress(ptr_glXCopyContext, "glXCopyContext");
        OriginalGL->FunctionAddress(ptr_glXSwapBuffers, "glXSwapBuffers");
        OriginalGL->FunctionAddress(ptr_glXDestroyGLXPixmap, "glXDestroyGLXPixmap");
        OriginalGL->FunctionAddress(ptr_glXQueryExtension, "glXQueryExtension");
        OriginalGL->FunctionAddress(ptr_glXQueryVersion, "glXQueryVersion");
        OriginalGL->FunctionAddress(ptr_glXIsDirect, "glXIsDirect");
        OriginalGL->FunctionAddress(ptr_glXGetConfig, "glXGetConfig");
        OriginalGL->FunctionAddress(ptr_glXGetCurrentContext, "glXGetCurrentContext");
        OriginalGL->FunctionAddress(ptr_glXGetCurrentDrawable, "glXGetCurrentDrawable");
        OriginalGL->FunctionAddress(ptr_glXWaitGL, "glXWaitGL");
        OriginalGL->FunctionAddress(ptr_glXWaitX, "glXWaitX");
        OriginalGL->FunctionAddress(ptr_glXUseXFont, "glXUseXFont");
        OriginalGL->FunctionAddress(ptr_glXIsDirect, "glXIsDirect");
		#endif
	}
	catch(std::exception &e)
	{
		return false;
	}
	return true;
}

bool __stdcall DeInitialize(void)
{
	if (OriginalGL)
	{
		delete OriginalGL;
		OriginalGL = nullptr;
		return true;
	}
	return false;
}

extern "C" __stdcall void glAccum(GLenum op, GLfloat value)
{
	ptr_glAccum(op, value);
}

extern "C" __stdcall void glActiveTextureARB(GLenum texture)
{
	ptr_glActiveTextureARB(texture);
}

extern "C" __stdcall void glAlphaFunc(GLenum func, GLclampf ref)
{
	ptr_glAlphaFunc(func, ref);
}

extern "C" __stdcall GLboolean glAreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences)
{
	return ptr_glAreTexturesResident(n, textures, residences);
}

extern "C" __stdcall void glArrayElement(GLint index)
{
	ptr_glArrayElement(index);
}

extern "C" __stdcall void glBegin(GLenum mode)
{
	ptr_glBegin(mode);
}

extern "C" __stdcall void glBindBufferARB(GLenum target, GLuint buffer)
{
	ptr_glBindBufferARB(target, buffer);
}

extern "C" __stdcall void glBindTexture(GLenum target, GLuint texture)
{
	ptr_glBindTexture(target, texture);
}

extern "C" __stdcall void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
{
	ptr_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

extern "C" __stdcall void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	ptr_glBlendFunc(sfactor, dfactor);
}

extern "C" __stdcall void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{
	ptr_glBufferDataARB(target,  size, data, usage);
}

extern "C" __stdcall void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{
	ptr_glBufferSubDataARB(target,  offset,  size, data);
}

extern "C" __stdcall void glCallList(GLuint list)
{
	ptr_glCallList(list);
}

extern "C" __stdcall void glCallLists(GLsizei n, GLenum type, const GLvoid *lists)
{
	ptr_glCallLists(n, type, lists);
}

extern "C" __stdcall void glClear(GLbitfield mask)
{
	ptr_glClear(mask);
}

extern "C" __stdcall void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	ptr_glClearAccum(red, green, blue, alpha);
}

extern "C" __stdcall void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	ptr_glClearColor(red, green, blue, alpha);
}

extern "C" __stdcall void glClearDepth(GLclampd depth)
{
	ptr_glClearDepth(depth);
}

extern "C" __stdcall void glClearIndex(GLfloat c)
{
	ptr_glClearIndex(c);
}

extern "C" __stdcall void glClearStencil(GLint s)
{
	ptr_glClearStencil(s);
}

extern "C" __stdcall void glClipPlane(GLenum plane, const GLdouble *equation)
{
	ptr_glClipPlane(plane, equation);
}

extern "C" __stdcall void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	ptr_glColor3b( red,  green,  blue);
}

extern "C" __stdcall void glColor3bv(const GLbyte *v)
{
	ptr_glColor3bv( v);
}

extern "C" __stdcall void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	ptr_glColor3d(red, green, blue);
}

extern "C" __stdcall void glColor3dv(const GLdouble *v)
{
	ptr_glColor3dv(v);
}

extern "C" __stdcall void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	ptr_glColor3f(red, green, blue);
}

extern "C" __stdcall void glColor3fv(const GLfloat *v)
{
	ptr_glColor3fv(v);
}

extern "C" __stdcall void glColor3i(GLint red, GLint green, GLint blue)
{
	ptr_glColor3i(red, green, blue);
}

extern "C" __stdcall void glColor3iv(const GLint *v)
{
	ptr_glColor3iv(v);
}

extern "C" __stdcall void glColor3s(GLshort red, GLshort green, GLshort blue)
{
	ptr_glColor3s(red, green, blue);
}

extern "C" __stdcall void glColor3sv(const GLshort *v)
{
	ptr_glColor3sv(v);
}

extern "C" __stdcall void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	ptr_glColor3ub(red, green, blue);
}

extern "C" __stdcall void glColor3ubv(const GLubyte *v)
{
	ptr_glColor3ubv(v);
}

extern "C" __stdcall void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
	ptr_glColor3ui(red, green, blue);
}

extern "C" __stdcall void glColor3uiv(const GLuint *v)
{
	ptr_glColor3uiv(v);
}

extern "C" __stdcall void glColor3us(GLushort red, GLushort green, GLushort blue)
{
	ptr_glColor3us(red, green, blue);
}

extern "C" __stdcall void glColor3usv(const GLushort *v)
{
	ptr_glColor3usv(v);
}

extern "C" __stdcall void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	ptr_glColor4b( red,  green,  blue,  alpha);
}

extern "C" __stdcall void glColor4bv(const GLbyte *v)
{
	ptr_glColor4bv( v);
}

extern "C" __stdcall void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	ptr_glColor4d(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4dv(const GLdouble *v)
{
	ptr_glColor4dv(v);
}

extern "C" __stdcall void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	ptr_glColor4f(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4fv(const GLfloat *v)
{
	ptr_glColor4fv(v);
}

extern "C" __stdcall void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	ptr_glColor4i(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4iv(const GLint *v)
{
	ptr_glColor4iv(v);
}

extern "C" __stdcall void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	ptr_glColor4s(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4sv(const GLshort *v)
{
	ptr_glColor4sv(v);
}

extern "C" __stdcall void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	ptr_glColor4ub(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4ubv(const GLubyte *v)
{
	ptr_glColor4ubv(v);
}

extern "C" __stdcall void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	ptr_glColor4ui(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4uiv(const GLuint *v)
{
	ptr_glColor4uiv(v);
}

extern "C" __stdcall void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	ptr_glColor4us(red, green, blue, alpha);
}

extern "C" __stdcall void glColor4usv(const GLushort *v)
{
	ptr_glColor4usv(v);
}

extern "C" __stdcall void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	ptr_glColorMask(red, green, blue, alpha);
}

extern "C" __stdcall void glColorMaterial(GLenum face, GLenum mode)
{
	ptr_glColorMaterial(face, mode);
}

extern "C" __stdcall void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glColorPointer(size, type, stride, pointer);
}

extern "C" __stdcall void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	ptr_glCopyPixels(x, y, width, height, type);
}

extern "C" __stdcall void glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
	ptr_glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

extern "C" __stdcall void glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	ptr_glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

extern "C" __stdcall void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	ptr_glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

extern "C" __stdcall void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	ptr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

extern "C" __stdcall void glCullFace(GLenum mode)
{
	ptr_glCullFace(mode);
}

extern "C" __stdcall void glDeleteLists(GLuint list, GLsizei range)
{
	ptr_glDeleteLists(list, range);
}

extern "C" __stdcall void glDeleteTextures(GLsizei n, const GLuint *textures)
{
	ptr_glDeleteTextures(n, textures);
}

extern "C" __stdcall void glDepthFunc(GLenum func)
{
	ptr_glDepthFunc(func);
}

extern "C" __stdcall void glDepthMask(GLboolean flag)
{
	ptr_glDepthMask(flag);
}

extern "C" __stdcall void glDepthRange(GLclampd zNear, GLclampd zFar)
{
	ptr_glDepthRange(zNear, zFar);
}

extern "C" __stdcall void glDisable(GLenum cap)
{
	ptr_glDisable(cap);
}

extern "C" __stdcall void glDisableClientState(GLenum array)
{
	ptr_glDisableClientState(array);
}

extern "C" __stdcall void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	ptr_glDrawArrays(mode, first, count);
}

extern "C" __stdcall void glDrawBuffer(GLenum mode)
{
	ptr_glDrawBuffer(mode);
}

extern "C" __stdcall void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
	ptr_glDrawElements(mode, count, type, indices);
}

extern "C" __stdcall void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	ptr_glDrawPixels(width, height, format, type, pixels);
}

/*extern "C" __stdcall void glDebugEntry(DWORD dwArg1, DWORD dwArg2)
{
	ptr_glDebugEntry(dwArg1, dwArg2);
}*/

extern "C" __stdcall void glEdgeFlag(GLboolean flag)
{
	ptr_glEdgeFlag(flag);
}

extern "C" __stdcall void glEdgeFlagv(const GLboolean *flag)
{
	ptr_glEdgeFlagv(flag);
}

extern "C" __stdcall void glEdgeFlagPointer(GLsizei stride, const GLvoid *pointer)
{
	ptr_glEdgeFlagPointer(stride, pointer);
}

extern "C" __stdcall void glEnable(GLenum cap)
{
	ptr_glEnable(cap);
}

extern "C" __stdcall void glEnableClientState(GLenum array)
{
	ptr_glEnableClientState(array);
}

extern "C" __stdcall void glEnd(void)
{
	ptr_glEnd();
}

extern "C" __stdcall void glEndList(void)
{
	ptr_glEndList();
}

extern "C" __stdcall void glEvalCoord1d(GLdouble u)
{
	ptr_glEvalCoord1d(u);
}

extern "C" __stdcall void glEvalCoord1dv(const GLdouble *u)
{
	ptr_glEvalCoord1dv(u);
}

extern "C" __stdcall void glEvalCoord1f(GLfloat u)
{
	ptr_glEvalCoord1f(u);
}

extern "C" __stdcall void glEvalCoord1fv(const GLfloat *u)
{
	ptr_glEvalCoord1fv(u);
}

extern "C" __stdcall void glEvalCoord2d(GLdouble u, GLdouble v)
{
	ptr_glEvalCoord2d(u, v);
}

extern "C" __stdcall void glEvalCoord2dv(const GLdouble *u)
{
	ptr_glEvalCoord2dv(u);
}

extern "C" __stdcall void glEvalCoord2f(GLfloat u, GLfloat v)
{
	ptr_glEvalCoord2f(u, v);
}

extern "C" __stdcall void glEvalCoord2fv(const GLfloat *u)
{
	ptr_glEvalCoord2fv(u);
}

extern "C" __stdcall void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	ptr_glEvalMesh1(mode, i1, i2);
}

extern "C" __stdcall void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	ptr_glEvalMesh2(mode, i1, i2, j1, j2);
}

extern "C" __stdcall void glEvalPoint1(GLint i)
{
	ptr_glEvalPoint1(i);
}

extern "C" __stdcall void glEvalPoint2(GLint i, GLint j)
{
	ptr_glEvalPoint2(i, j);
}

extern "C" __stdcall void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer)
{
	ptr_glFeedbackBuffer(size, type, buffer);
}

extern "C" __stdcall void glFinish(void)
{
	ptr_glFinish();
}

extern "C" __stdcall void glFlush(void)
{
	ptr_glFlush();
}

extern "C" __stdcall void glFogf(GLenum pname, GLfloat param)
{
	ptr_glFogf(pname, param);
}

extern "C" __stdcall void glFogfv(GLenum pname, const GLfloat *params)
{
	ptr_glFogfv(pname, params);
}

extern "C" __stdcall void glFogi(GLenum pname, GLint param)
{
	ptr_glFogi(pname, param);
}

extern "C" __stdcall void glFogiv(GLenum pname, const GLint *params)
{
	ptr_glFogiv(pname, params);
}

extern "C" __stdcall void glFrontFace(GLenum mode)
{
	ptr_glFrontFace(mode);
}

extern "C" __stdcall void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	ptr_glFrustum(left, right, bottom, top, zNear, zFar);
}

extern "C" __stdcall void glGenBuffersARB(GLsizei n, GLuint *buffers)
{
	ptr_glGenBuffersARB(n, buffers);
}

extern "C" __stdcall GLuint glGenLists(GLsizei range)
{
	return ptr_glGenLists(range);
}

extern "C" __stdcall void glGenTextures(GLsizei n, GLuint *textures)
{
	ptr_glGenTextures(n, textures);
}

extern "C" __stdcall void glGetBooleanv(GLenum pname, GLboolean *params)
{
	ptr_glGetBooleanv(pname, params);
}

extern "C" __stdcall void glGetDoublev(GLenum pname, GLdouble *params)
{
	ptr_glGetDoublev(pname, params);
}

extern "C" __stdcall void glGetFloatv(GLenum pname, GLfloat *params)
{
	ptr_glGetFloatv(pname, params);
}

extern "C" __stdcall void glGetIntegerv(GLenum pname, GLint *params)
{
	ptr_glGetIntegerv(pname, params);
}

extern "C" __stdcall void glGetClipPlane(GLenum plane, GLdouble *equation)
{
	ptr_glGetClipPlane(plane, equation);
}

extern "C" __stdcall GLenum glGetError(void)
{
	return ptr_glGetError();
}

extern "C" __stdcall void glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
{
	ptr_glGetLightfv(light, pname, params);
}

extern "C" __stdcall void glGetLightiv(GLenum light, GLenum pname, GLint *params)
{
	ptr_glGetLightiv(light, pname, params);
}

extern "C" __stdcall void glGetMapdv(GLenum target, GLenum query, GLdouble *v)
{
	ptr_glGetMapdv(target, query, v);
}

extern "C" __stdcall void glGetMapfv(GLenum target, GLenum query, GLfloat *v)
{
	ptr_glGetMapfv(target, query, v);
}

extern "C" __stdcall void glGetMapiv(GLenum target, GLenum query, GLint *v)
{
	ptr_glGetMapiv(target, query, v);
}

extern "C" __stdcall void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{
	ptr_glGetMaterialfv(face, pname, params);
}

extern "C" __stdcall void glGetMaterialiv(GLenum face, GLenum pname, GLint *params)
{
	ptr_glGetMaterialiv(face, pname, params);
}

extern "C" __stdcall void glGetPixelMapfv(GLenum map, GLfloat *values)
{
	ptr_glGetPixelMapfv(map, values);
}

extern "C" __stdcall void glGetPixelMapuiv(GLenum map, GLuint *values)
{
	ptr_glGetPixelMapuiv(map, values);
}

extern "C" __stdcall void glGetPixelMapusv(GLenum map, GLushort *values)
{
	ptr_glGetPixelMapusv(map, values);
}

extern "C" __stdcall void glGetPointerv(GLenum pname, GLvoid **params)
{
	ptr_glGetPointerv(pname, params);
}

extern "C" __stdcall void glGetPolygonStipple(GLubyte *mask)
{
	ptr_glGetPolygonStipple(mask);
}

extern "C" __stdcall const GLubyte* glGetString(GLenum name)
{
	return ptr_glGetString(name);
}

extern "C" __stdcall void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
{
	ptr_glGetTexEnvfv(target, pname, params);
}

extern "C" __stdcall void glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
{
	ptr_glGetTexEnviv(target, pname, params);
}

extern "C" __stdcall void glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params)
{
	ptr_glGetTexGendv(coord, pname, params);
}

extern "C" __stdcall void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params)
{
	ptr_glGetTexGenfv(coord, pname, params);
}

extern "C" __stdcall void glGetTexGeniv(GLenum coord, GLenum pname, GLint *params)
{
	ptr_glGetTexGeniv(coord, pname, params);
}

extern "C" __stdcall void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	ptr_glGetTexImage(target, level, format, type, pixels);
}

extern "C" __stdcall void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	ptr_glGetTexLevelParameterfv(target, level, pname, params);
}

extern "C" __stdcall void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
{
	ptr_glGetTexLevelParameteriv(target, level, pname, params);
}

extern "C" __stdcall void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	ptr_glGetTexParameterfv(target, pname, params);
}

extern "C" __stdcall void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
	ptr_glGetTexParameteriv(target, pname, params);
}

extern "C" __stdcall void glHint(GLenum target, GLenum mode)
{
	ptr_glHint(target, mode);
}

extern "C" __stdcall void glIndexd(GLdouble c)
{
	ptr_glIndexd(c);
}

extern "C" __stdcall void glIndexdv(const GLdouble *c)
{
	ptr_glIndexdv(c);
}

extern "C" __stdcall void glIndexf(GLfloat c)
{
	ptr_glIndexf(c);
}

extern "C" __stdcall void glIndexfv(const GLfloat *c)
{
	ptr_glIndexfv(c);
}

extern "C" __stdcall void glIndexi(GLint c)
{
	ptr_glIndexi(c);
}

extern "C" __stdcall void glIndexiv(const GLint *c)
{
	ptr_glIndexiv(c);
}

extern "C" __stdcall void glIndexs(GLshort c)
{
	ptr_glIndexs(c);
}

extern "C" __stdcall void glIndexsv(const GLshort *c)
{
	ptr_glIndexsv(c);
}

extern "C" __stdcall void glIndexub(GLubyte c)
{
	ptr_glIndexub(c);
}

extern "C" __stdcall void glIndexubv(const GLubyte *c)
{
	ptr_glIndexubv(c);
}

extern "C" __stdcall void glIndexMask(GLuint mask)
{
	ptr_glIndexMask(mask);
}

extern "C" __stdcall void glIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glIndexPointer(type, stride, pointer);
}

extern "C" __stdcall void glInitNames(void)
{
	ptr_glInitNames();
}

extern "C" __stdcall void glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer)
{
	ptr_glInterleavedArrays(format, stride, pointer);
}

extern "C" __stdcall GLboolean glIsEnabled(GLenum cap)
{
	return ptr_glIsEnabled(cap);
}

extern "C" __stdcall GLboolean glIsList(GLuint list)
{
	return ptr_glIsList(list);
}

extern "C" __stdcall GLboolean glIsTexture(GLuint texture)
{
	return ptr_glIsTexture(texture);
}

extern "C" __stdcall void glLightf(GLenum light, GLenum pname, GLfloat param)
{
	ptr_glLightf(light, pname, param);
}

extern "C" __stdcall void glLightfv(GLenum light, GLenum pname, const GLfloat *params)
{
	ptr_glLightfv(light, pname, params);
}

extern "C" __stdcall void glLighti(GLenum light, GLenum pname, GLint param)
{
	ptr_glLighti(light, pname, param);
}

extern "C" __stdcall void glLightiv(GLenum light, GLenum pname, const GLint *params)
{
	ptr_glLightiv(light, pname, params);
}

extern "C" __stdcall void glLightModelf(GLenum pname, GLfloat param)
{
	ptr_glLightModelf(pname, param);
}

extern "C" __stdcall void glLightModelfv(GLenum pname, const GLfloat *params)
{
	ptr_glLightModelfv(pname, params);
}

extern "C" __stdcall void glLightModeli(GLenum pname, GLint param)
{
	ptr_glLightModeli(pname, param);
}

extern "C" __stdcall void glLightModeliv(GLenum pname, const GLint *params)
{
	ptr_glLightModeliv(pname, params);
}

extern "C" __stdcall void glLineStipple(GLint factor, GLushort pattern)
{
	ptr_glLineStipple(factor, pattern);
}

extern "C" __stdcall void glLineWidth(GLfloat width)
{
	ptr_glLineWidth(width);
}

extern "C" __stdcall void glListBase(GLuint base)
{
	ptr_glListBase(base);
}

extern "C" __stdcall void glLoadIdentity(void)
{
	ptr_glLoadIdentity();
}

extern "C" __stdcall void glLoadMatrixd(const GLdouble *m)
{
	ptr_glLoadMatrixd(m);
}

extern "C" __stdcall void glLoadMatrixf(const GLfloat *m)
{
	ptr_glLoadMatrixf(m);
}

extern "C" __stdcall void glLoadName(GLuint name)
{
	ptr_glLoadName(name);
}

extern "C" __stdcall void glLogicOp(GLenum opcode)
{
	ptr_glLogicOp(opcode);
}

extern "C" __stdcall void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
{
	ptr_glMap1d(target, u1, u2, stride, order, points);
}

extern "C" __stdcall void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
{
	ptr_glMap1f(target, u1, u2, stride, order, points);
}

extern "C" __stdcall void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
{
	ptr_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

extern "C" __stdcall void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
{
	ptr_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

extern "C" __stdcall void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	ptr_glMapGrid1d(un, u1, u2);
}

extern "C" __stdcall void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	ptr_glMapGrid1f(un, u1, u2);
}

extern "C" __stdcall void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	ptr_glMapGrid2d(un, u1, u2, vn, v1, v2);
}

extern "C" __stdcall void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	ptr_glMapGrid2f(un, u1, u2, vn, v1, v2);
}

extern "C" __stdcall void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	ptr_glMaterialf(face, pname, param);
}

extern "C" __stdcall void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
{
	ptr_glMaterialfv(face, pname, params);
}

extern "C" __stdcall void glMateriali(GLenum face, GLenum pname, GLint param)
{
	ptr_glMateriali(face, pname, param);
}

extern "C" __stdcall void glMaterialiv(GLenum face, GLenum pname, const GLint *params)
{
	ptr_glMaterialiv(face, pname, params);
}

extern "C" __stdcall void glMatrixMode(GLenum mode)
{
	ptr_glMatrixMode(mode);
}

extern "C" __stdcall void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	ptr_glMultiTexCoord2fARB(target, s, t);
}

extern "C" __stdcall void glMultMatrixd(const GLdouble *m)
{
	ptr_glMultMatrixd(m);
}

extern "C" __stdcall void glMultMatrixf(const GLfloat *m)
{
	ptr_glMultMatrixf(m);
}

extern "C" __stdcall void glNewList(GLuint list, GLenum mode)
{
	ptr_glNewList(list, mode);
}

extern "C" __stdcall void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	ptr_glNormal3b( nx,  ny,  nz);
}

extern "C" __stdcall void glNormal3bv(const GLbyte *v)
{
	ptr_glNormal3bv( v);
}

extern "C" __stdcall void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	ptr_glNormal3d(nx, ny, nz);
}

extern "C" __stdcall void glNormal3dv(const GLdouble *v)
{
	ptr_glNormal3dv(v);
}

extern "C" __stdcall void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	ptr_glNormal3f(nx, ny, nz);
}

extern "C" __stdcall void glNormal3fv(const GLfloat *v)
{
	ptr_glNormal3fv(v);
}

extern "C" __stdcall void glNormal3i(GLint nx, GLint ny, GLint nz)
{
	ptr_glNormal3i(nx, ny, nz);
}

extern "C" __stdcall void glNormal3iv(const GLint *v)
{
	ptr_glNormal3iv(v);
}

extern "C" __stdcall void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
	ptr_glNormal3s(nx, ny, nz);
}

extern "C" __stdcall void glNormal3sv(const GLshort *v)
{
	ptr_glNormal3sv(v);
}

extern "C" __stdcall void glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glNormalPointer(type, stride, pointer);
}

extern "C" __stdcall void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	ptr_glOrtho(left, right, bottom, top, zNear, zFar);
}

extern "C" __stdcall void glPassThrough(GLfloat token)
{
	ptr_glPassThrough(token);
}

extern "C" __stdcall void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values)
{
	ptr_glPixelMapfv(map, mapsize, values);
}

extern "C" __stdcall void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values)
{
	ptr_glPixelMapuiv(map, mapsize, values);
}

extern "C" __stdcall void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values)
{
	ptr_glPixelMapusv(map, mapsize, values);
}

extern "C" __stdcall void glPixelStoref(GLenum pname, GLfloat param)
{
	ptr_glPixelStoref(pname, param);
}

extern "C" __stdcall void glPixelStorei(GLenum pname, GLint para)
{
	ptr_glPixelStorei(pname, para);
}

extern "C" __stdcall void glPixelTransferf(GLenum pname, GLfloat param)
{
	ptr_glPixelTransferf(pname, param);
}

extern "C" __stdcall void glPixelTransferi(GLenum pname, GLint param)
{
	ptr_glPixelTransferi(pname, param);
}

extern "C" __stdcall void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	ptr_glPixelZoom(xfactor, yfactor);
}

extern "C" __stdcall void glPointSize(GLfloat size)
{
	ptr_glPointSize(size);
}

extern "C" __stdcall void glPolygonMode(GLenum face, GLenum mode)
{
	ptr_glPolygonMode(face, mode);
}

extern "C" __stdcall void glPolygonOffset(GLfloat factor, GLfloat units)
{
	ptr_glPolygonOffset(factor, units);
}

extern "C" __stdcall void glPolygonStipple(const GLubyte *mask)
{
	ptr_glPolygonStipple(mask);
}

extern "C" __stdcall void glPopAttrib(void)
{
	ptr_glPopAttrib();
}

extern "C" __stdcall void glPopClientAttrib(void)
{
	ptr_glPopClientAttrib();
}

extern "C" __stdcall void glPopMatrix(void)
{
	ptr_glPopMatrix();
}

extern "C" __stdcall void glPopName(void)
{
	ptr_glPopName();
}

extern "C" __stdcall void glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities)
{
	ptr_glPrioritizeTextures(n, textures, priorities);
}

extern "C" __stdcall void glPushAttrib(GLbitfield mask)
{
	ptr_glPushAttrib(mask);
}

extern "C" __stdcall void glPushClientAttrib(GLbitfield mask)
{
	ptr_glPushClientAttrib(mask);
}

extern "C" __stdcall void glPushMatrix(void)
{
	ptr_glPushMatrix();
}

extern "C" __stdcall void glPushName(GLuint name)
{
	ptr_glPushName(name);
}

extern "C" __stdcall void glRasterPos2d(GLdouble x, GLdouble y)
{
	ptr_glRasterPos2d(x, y);
}

extern "C" __stdcall void glRasterPos2dv(const GLdouble *v)
{
	ptr_glRasterPos2dv(v);
}

extern "C" __stdcall void glRasterPos2f(GLfloat x, GLfloat y)
{
	ptr_glRasterPos2f(x, y);
}

extern "C" __stdcall void glRasterPos2fv(const GLfloat *v)
{
	ptr_glRasterPos2fv(v);
}

extern "C" __stdcall void glRasterPos2i(GLint x, GLint y)
{
	ptr_glRasterPos2i(x, y);
}

extern "C" __stdcall void glRasterPos2iv(const GLint *v)
{
	ptr_glRasterPos2iv(v);
}

extern "C" __stdcall void glRasterPos2s(GLshort x, GLshort y)
{
	ptr_glRasterPos2s(x, y);
}

extern "C" __stdcall void glRasterPos2sv(const GLshort *v)
{
	ptr_glRasterPos2sv(v);
}

extern "C" __stdcall void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	ptr_glRasterPos3d(x, y, z);
}

extern "C" __stdcall void glRasterPos3dv(const GLdouble *v)
{
	ptr_glRasterPos3dv(v);
}

extern "C" __stdcall void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glRasterPos3f(x, y, z);
}

extern "C" __stdcall void glRasterPos3fv(const GLfloat *v)
{
	ptr_glRasterPos3fv(v);
}

extern "C" __stdcall void glRasterPos3i(GLint x, GLint y, GLint z)
{
	ptr_glRasterPos3i(x, y, z);
}

extern "C" __stdcall void glRasterPos3iv(const GLint *v)
{
	ptr_glRasterPos3iv(v);
}

extern "C" __stdcall void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
	ptr_glRasterPos3s(x, y, z);
}

extern "C" __stdcall void glRasterPos3sv(const GLshort *v)
{
	ptr_glRasterPos3sv(v);
}

extern "C" __stdcall void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	ptr_glRasterPos4d(x, y, z, w);
}

extern "C" __stdcall void glRasterPos4dv(const GLdouble *v)
{
	ptr_glRasterPos4dv(v);
}

extern "C" __stdcall void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	ptr_glRasterPos4f(x, y, z, w);
}

extern "C" __stdcall void glRasterPos4fv(const GLfloat *v)
{
	ptr_glRasterPos4fv(v);
}

extern "C" __stdcall void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	ptr_glRasterPos4i(x, y, z, w);
}

extern "C" __stdcall void glRasterPos4iv(const GLint *v)
{
	ptr_glRasterPos4iv(v);
}

extern "C" __stdcall void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	ptr_glRasterPos4s(x, y, z, w);
}

extern "C" __stdcall void glRasterPos4sv(const GLshort *v)
{
	ptr_glRasterPos4sv(v);
}

extern "C" __stdcall void glReadBuffer(GLenum mode)
{
	ptr_glReadBuffer(mode);
}

extern "C" __stdcall void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{
	ptr_glReadPixels(x, y, width, height, format, type, pixels);
}

extern "C" __stdcall void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	ptr_glRectd(x1, y1, x2, y2);
}

extern "C" __stdcall void glRectdv(const GLdouble *v1, const GLdouble *v2)
{
	ptr_glRectdv(v1, v2);
}

extern "C" __stdcall void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	ptr_glRectf(x1, y1, x2, y2);
}

extern "C" __stdcall void glRectfv(const GLfloat *v1, const GLfloat *v2)
{
	ptr_glRectfv(v1, v2);
}

extern "C" __stdcall void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	ptr_glRecti(x1, y1, x2, y2);
}

extern "C" __stdcall void glRectiv(const GLint *v1, const GLint *v2)
{
	ptr_glRectiv(v1, v2);
}

extern "C" __stdcall void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	ptr_glRects(x1, y1, x2, y2);
}

extern "C" __stdcall void glRectsv(const GLshort *v1, const GLshort *v2)
{
	ptr_glRectsv(v1, v2);
}

extern "C" __stdcall GLint glRenderMode(GLenum mode)
{
	return ptr_glRenderMode(mode);
}

extern "C" __stdcall void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	ptr_glRotated(angle, x, y, z);
}

extern "C" __stdcall void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glRotatef(angle, x, y, z);
}

extern "C" __stdcall void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
	ptr_glScaled(x, y, z);
}

extern "C" __stdcall void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glScalef(x, y, z);
}

extern "C" __stdcall void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	ptr_glScissor(x, y, width, height);
}

extern "C" __stdcall void glSelectBuffer(GLsizei size, GLuint *buffer)
{
	ptr_glSelectBuffer(size, buffer);
}

extern "C" __stdcall void glShadeModel(GLenum mode)
{
	ptr_glShadeModel(mode);
}

extern "C" __stdcall void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	ptr_glStencilFunc(func, ref, mask);
}

extern "C" __stdcall void glStencilMask(GLuint mask)
{
	ptr_glStencilMask(mask);
}

extern "C" __stdcall void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	ptr_glStencilOp(fail, zfail, zpass);
}

extern "C" __stdcall void glTexCoord1d(GLdouble s)
{
	ptr_glTexCoord1d(s);
}

extern "C" __stdcall void glTexCoord1dv(const GLdouble *v)
{
	ptr_glTexCoord1dv(v);
}

extern "C" __stdcall void glTexCoord1f(GLfloat s)
{
	ptr_glTexCoord1f(s);
}

extern "C" __stdcall void glTexCoord1fv(const GLfloat *v)
{
	ptr_glTexCoord1fv(v);
}

extern "C" __stdcall void glTexCoord1i(GLint s)
{
	ptr_glTexCoord1i(s);
}

extern "C" __stdcall void glTexCoord1iv(const GLint *v)
{
	ptr_glTexCoord1iv(v);
}

extern "C" __stdcall void glTexCoord1s(GLshort s)
{
	ptr_glTexCoord1s(s);
}

extern "C" __stdcall void glTexCoord1sv(const GLshort *v)
{
	ptr_glTexCoord1sv(v);
}

extern "C" __stdcall void glTexCoord2d(GLdouble s, GLdouble t)
{
	ptr_glTexCoord2d(s, t);
}

extern "C" __stdcall void glTexCoord2dv(const GLdouble *v)
{
	ptr_glTexCoord2dv(v);
}

extern "C" __stdcall void glTexCoord2f(GLfloat s,  GLfloat t)
{
	ptr_glTexCoord2f(s,  t);
}

extern "C" __stdcall void glTexCoord2fv(const GLfloat *v)
{
	ptr_glTexCoord2fv(v);
}

extern "C" __stdcall void glTexCoord2i(GLint s, GLint t)
{
	ptr_glTexCoord2i(s, t);
}

extern "C" __stdcall void glTexCoord2iv(const GLint *v)
{
	ptr_glTexCoord2iv(v);
}

extern "C" __stdcall void glTexCoord2s(GLshort s, GLshort t)
{
	ptr_glTexCoord2s(s, t);
}

extern "C" __stdcall void glTexCoord2sv(const GLshort *v)
{
	ptr_glTexCoord2sv(v);
}

extern "C" __stdcall void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	ptr_glTexCoord3d(s, t, r);
}

extern "C" __stdcall void glTexCoord3dv(const GLdouble *v)
{
	ptr_glTexCoord3dv(v);
}

extern "C" __stdcall void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	ptr_glTexCoord3f(s, t, r);
}

extern "C" __stdcall void glTexCoord3fv(const GLfloat *v)
{
	ptr_glTexCoord3fv(v);
}

extern "C" __stdcall void glTexCoord3i(GLint s, GLint t, GLint r)
{
	ptr_glTexCoord3i(s, t, r);
}

extern "C" __stdcall void glTexCoord3iv(const GLint *v)
{
	ptr_glTexCoord3iv(v);
}

extern "C" __stdcall void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
	ptr_glTexCoord3s(s, t, r);
}

extern "C" __stdcall void glTexCoord3sv(const GLshort *v)
{
	ptr_glTexCoord3sv(v);
}

extern "C" __stdcall void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	ptr_glTexCoord4d(s, t, r, q);
}

extern "C" __stdcall void glTexCoord4dv(const GLdouble *v)
{
	ptr_glTexCoord4dv(v);
}

extern "C" __stdcall void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	ptr_glTexCoord4f(s, t, r, q);
}

extern "C" __stdcall void glTexCoord4fv(const GLfloat *v)
{
	ptr_glTexCoord4fv(v);
}

extern "C" __stdcall void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	ptr_glTexCoord4i(s, t, r, q);
}

extern "C" __stdcall void glTexCoord4iv(const GLint *v)
{
	ptr_glTexCoord4iv(v);
}

extern "C" __stdcall void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	ptr_glTexCoord4s(s, t, r, q);
}

extern "C" __stdcall void glTexCoord4sv(const GLshort *v)
{
	ptr_glTexCoord4sv(v);
}

extern "C" __stdcall void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glTexCoordPointer(size, type, stride, pointer);
}

extern "C" __stdcall void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	ptr_glTexEnvf(target, pname, param);
}

extern "C" __stdcall void glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
{
	ptr_glTexEnvfv(target, pname, params);
}

extern "C" __stdcall void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	ptr_glTexEnvi(target, pname, param);
}

extern "C" __stdcall void glTexEnviv(GLenum target, GLenum pname, const GLint *params)
{
	ptr_glTexEnviv(target, pname, params);
}

extern "C" __stdcall void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
	ptr_glTexGend(coord, pname, param);
}

extern "C" __stdcall void glTexGendv(GLenum coord, GLenum pname, const GLdouble *params)
{
	ptr_glTexGendv(coord, pname, params);
}

extern "C" __stdcall void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	ptr_glTexGenf(coord, pname, param);
}

extern "C" __stdcall void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params)
{
	ptr_glTexGenfv(coord, pname, params);
}

extern "C" __stdcall void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
	ptr_glTexGeni(coord, pname, param);
}

extern "C" __stdcall void glTexGeniv(GLenum coord, GLenum pname, const GLint *params)
{
	ptr_glTexGeniv(coord, pname, params);
}

extern "C" __stdcall void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	ptr_glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

extern "C" __stdcall void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	ptr_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

extern "C" __stdcall void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	ptr_glTexParameterf(target, pname, param);
}

extern "C" __stdcall void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	ptr_glTexParameterfv(target, pname, params);
}

extern "C" __stdcall void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	ptr_glTexParameteri(target, pname, param);
}

extern "C" __stdcall void glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	ptr_glTexParameteriv(target, pname, params);
}

extern "C" __stdcall void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	ptr_glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

extern "C" __stdcall void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type,const GLvoid *pixels)
{
	ptr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type,pixels);
}

extern "C" __stdcall void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
	ptr_glTranslated(x, y, z);
}

extern "C" __stdcall void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glTranslatef(x, y, z);
}

extern "C" __stdcall void glVertex2d(GLdouble x, GLdouble y)
{
	ptr_glVertex2d(x, y);
}

extern "C" __stdcall void glVertex2dv(const GLdouble *v)
{
	ptr_glVertex2dv(v);
}

extern "C" __stdcall void glVertex2f(GLfloat x, GLfloat y)
{
	ptr_glVertex2f(x, y);
}

extern "C" __stdcall void glVertex2fv(const GLfloat *v)
{
	ptr_glVertex2fv(v);
}

extern "C" __stdcall void glVertex2i(GLint x, GLint y)
{
	ptr_glVertex2i(x, y);
}

extern "C" __stdcall void glVertex2iv(const GLint *v)
{
	ptr_glVertex2iv(v);
}

extern "C" __stdcall void glVertex2s(GLshort x, GLshort y)
{
	ptr_glVertex2s(x, y);
}

extern "C" __stdcall void glVertex2sv(const GLshort *v)
{
	ptr_glVertex2sv(v);
}

extern "C" __stdcall void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	ptr_glVertex3d(x, y, z);
}

extern "C" __stdcall void glVertex3dv(const GLdouble *v)
{
	ptr_glVertex3dv(v);
}

extern "C" __stdcall void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	ptr_glVertex3f(x, y, z);
}

extern "C" __stdcall void glVertex3fv(const GLfloat *v)
{
	ptr_glVertex3fv(v);
}

extern "C" __stdcall void glVertex3i(GLint x, GLint y, GLint z)
{
	ptr_glVertex3i(x, y, z);
}

extern "C" __stdcall void glVertex3iv(const GLint *v)
{
	ptr_glVertex3iv(v);
}

extern "C" __stdcall void glVertex3s(GLshort x, GLshort y, GLshort z)
{
	ptr_glVertex3s(x, y, z);
}

extern "C" __stdcall void glVertex3sv(const GLshort *v)
{
	ptr_glVertex3sv(v);
}

extern "C" __stdcall void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	ptr_glVertex4d(x, y, z, w);
}

extern "C" __stdcall void glVertex4dv(const GLdouble *v)
{
	ptr_glVertex4dv(v);
}

extern "C" __stdcall void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	ptr_glVertex4f(x, y, z, w);
}

extern "C" __stdcall void glVertex4fv(const GLfloat *v)
{
	ptr_glVertex4fv(v);
}

extern "C" __stdcall void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
	ptr_glVertex4i(x, y, z, w);
}

extern "C" __stdcall void glVertex4iv(const GLint *v)
{
	ptr_glVertex4iv(v);
}

extern "C" __stdcall void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	ptr_glVertex4s(x, y, z, w);
}

extern "C" __stdcall void glVertex4sv(const GLshort *v)
{
	ptr_glVertex4sv(v);
}

extern "C" __stdcall void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	ptr_glVertexPointer(size, type, stride, pointer);
}

extern "C" __stdcall void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	ptr_glViewport(x, y, width, height);
}

#if defined _WIN32 || defined _WIN64
extern "C" __stdcall int wglChoosePixelFormat(HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd)
{
	return ptr_wglChoosePixelFormat(hdc, ppfd);
}

extern "C" __stdcall HGLRC wglCreateContext(HDC hdc)
{
	return ptr_wglCreateContext(hdc);
}

extern "C" __stdcall HGLRC wglCreateLayerContext(HDC hdc, int iLayerPlane)
{
	return ptr_wglCreateLayerContext(hdc, iLayerPlane);
}

extern "C" __stdcall BOOL wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask)
{
	return ptr_wglCopyContext(hglrcSrc, hglrcDst,  mask);
}

extern "C" __stdcall BOOL wglDeleteContext(HGLRC hglrc)
{
	return ptr_wglDeleteContext(hglrc);
}

extern "C" __stdcall BOOL wglDescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd)
{
	return ptr_wglDescribeLayerPlane(hdc, iPixelFormat, iLayerPlane,  nBytes, plpd);
}

extern "C" __stdcall int wglDescribePixelFormat(HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd)
{
	return ptr_wglDescribePixelFormat(hdc, iPixelFormat,  nBytes,  ppfd);
}

extern "C" __stdcall HGLRC wglGetCurrentContext(void)
{
	return ptr_wglGetCurrentContext();
}

extern "C" __stdcall HDC wglGetCurrentDC(void)
{
	return ptr_wglGetCurrentDC();
}

extern "C" __stdcall PROC wglGetDefaultProcAddress(LPCSTR lpszProc)
{
	return ptr_wglGetDefaultProcAddress(lpszProc);
}

extern "C" __stdcall int wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr)
{
	return ptr_wglGetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

extern "C" __stdcall int wglGetPixelFormat(HDC hdc)
{
	return ptr_wglGetPixelFormat(hdc);
}

extern "C" __stdcall PROC wglGetProcAddress(LPCSTR lpszProc)
{
	return ptr_wglGetProcAddress(lpszProc);
}

extern "C" __stdcall BOOL wglMakeCurrent(HDC hdc, HGLRC hglrc)
{
	return ptr_wglMakeCurrent(hdc, hglrc);
}

extern "C" __stdcall BOOL wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
	return ptr_wglRealizeLayerPalette(hdc, iLayerPlane, bRealize);
}

extern "C" __stdcall int wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr)
{
	return ptr_wglSetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

extern "C" __stdcall BOOL wglSetPixelFormat(HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd)
{
	return ptr_wglSetPixelFormat(hdc, iPixelFormat, ppfd);
}

extern "C" __stdcall BOOL wglShareLists(HGLRC hglrc1, HGLRC hglrc2)
{
	return ptr_wglShareLists(hglrc1, hglrc2);
}

extern "C" __stdcall BOOL wglSwapLayerBuffers(HDC hdc, UINT fuPlanes)
{
	return ptr_wglSwapLayerBuffers(hdc,  fuPlanes);
}

extern "C" __stdcall DWORD wglSwapMultipleBuffers(UINT dwArg1, CONST WGLSWAP* dwArg2)
{
	return ptr_wglSwapMultipleBuffers(dwArg1, dwArg2);
}

extern "C" __stdcall BOOL wglUseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return ptr_wglUseFontBitmapsW(hdc, first, count, listBase);
}

extern "C" __stdcall BOOL wglUseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return ptr_wglUseFontBitmapsA(hdc, first, count, listBase);
}

extern "C" __stdcall BOOL wglUseFontOutlinesW(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return ptr_wglUseFontOutlinesW(hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

extern "C" __stdcall BOOL wglUseFontOutlinesA(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return ptr_wglUseFontOutlinesA(hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

#else

extern XVisualInfo* glXChooseVisual(Display* dpy, int screen, int* attribList)
{
    return ptr_glXChooseVisual(dpy, screen, attribList);
}

extern GLXContext glXCreateContext(Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct)
{
    return ptr_glXCreateContext(dpy, vis, shareList, direct);
}

extern void glXDestroyContext(Display* dpy, GLXContext ctx)
{
    return ptr_glXDestroyContext(dpy, ctx);
}

extern Bool glXMakeCurrent(Display* dpy, GLXDrawable drawable, GLXContext ctx)
{
    return ptr_glXMakeCurrent(dpy, drawable, ctx);
}

extern void glXCopyContext(Display* dpy, GLXContext src, GLXContext dst, unsigned long mask)
{
    return ptr_glXCopyContext(dpy, src, dst, mask);
}

extern void glXSwapBuffers(Display* dpy, GLXDrawable drawable)
{
    return ptr_glXSwapBuffers(dpy, drawable);
}

extern GLXPixmap glXCreateGLXPixmap(Display* dpy, XVisualInfo* visual, Pixmap pixmap)
{
    return ptr_glXCreateGLXPixmap(dpy, visual, pixmap);
}

extern void glXDestroyGLXPixmap(Display* dpy, GLXPixmap pixmap)
{
    return ptr_glXDestroyGLXPixmap(dpy, pixmap);
}

extern Bool glXQueryExtension(Display* dpy, int* errorb, int* event)
{
    return ptr_glXQueryExtension(dpy, errorb, event);
}

extern Bool glXQueryVersion(Display* dpy, int* maj, int* min)
{
    return ptr_glXQueryVersion(dpy, maj, min);
}

extern Bool glXIsDirect(Display* dpy, GLXContext ctx)
{
    return ptr_glXIsDirect(dpy, ctx);
}

extern int glXGetConfig(Display* dpy, XVisualInfo* visual, int attrib, int* value)
{
    return ptr_glXGetConfig(dpy, visual, attrib, value);
}

extern GLXContext glXGetCurrentContext(void)
{
    return ptr_glXGetCurrentContext();
}

extern GLXDrawable glXGetCurrentDrawable(void)
{
    return ptr_glXGetCurrentDrawable();
}

extern void glXWaitGL(void)
{
    return ptr_glXWaitGL();
}

extern void glXWaitX(void)
{
    return ptr_glXWaitX();
}

extern void glXUseXFont(Font font, int first, int count, int list)
{
    return ptr_glXUseXFont(font, first, count, list);
}
#endif
