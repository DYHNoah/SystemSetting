#ifndef CrystalWidget_H
#define CrystalWidget_H

#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include "make_unique.hpp"
#include <qmath.h>
#include "qreadini.h"

#include "Camera.h"

class CrystalWidget : public QOpenGLWidget
                           , protected /*QOpenGLExtraFunctions*/QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit CrystalWidget(QWidget *parent = nullptr);
    ~CrystalWidget() Q_DECL_OVERRIDE;

    //scanner
    IniConfig scanner;

protected:
    void initializeGL()  Q_DECL_OVERRIDE;
    void resizeGL(int w, int h) Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;

    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
    void keyReleaseEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void wheelEvent(QWheelEvent *event) Q_DECL_OVERRIDE;

private:
    QOpenGLShaderProgram shaderProgram;

    QTimer* m_pTimer = nullptr;
    int     m_nTimeValue = 0;

    uint VBO, VAO, texture1, texture2;

    // camera
    std::unique_ptr<Camera> camera;
    bool m_bLeftPressed;
    QPoint m_lastPos;
};

#endif // CrystalWidget_H
