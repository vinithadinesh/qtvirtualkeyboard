/****************************************************************************
**
** Copyright (C) 2015 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://www.qt.io
**
** This file is part of the Qt Virtual Keyboard add-on for Qt Enterprise.
**
** Licensees holding valid Qt Enterprise licenses may use this file in
** accordance with the Qt Enterprise License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://www.qt.io
**
****************************************************************************/

#ifndef HANGULINPUTMETHOD_H
#define HANGULINPUTMETHOD_H

#include "abstractinputmethod.h"

class HangulInputMethodPrivate;

class HangulInputMethod : public AbstractInputMethod
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(HangulInputMethod)
public:
    explicit HangulInputMethod(QObject *parent = 0);
    ~HangulInputMethod();

    QList<DeclarativeInputEngine::InputMode> inputModes(const QString &locale);
    bool setInputMode(const QString &locale, DeclarativeInputEngine::InputMode inputMode);
    bool setTextCase(DeclarativeInputEngine::TextCase textCase);

    bool keyEvent(Qt::Key key, const QString &text, Qt::KeyboardModifiers modifiers);

    void reset();
    void update();
};

#endif // HANGULINPUTMETHOD_H
