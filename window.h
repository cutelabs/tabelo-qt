/**
 * Copyright 2022 Tabelo, <https://github.com/tabeloapp>.
 *
 * This file is part of Tabelo-Qt, <https://github.com/tabeloapp/tabelo-qt>.
 *
 * Tabelo-Qt is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tabelo-Qt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tabelo-Qt.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef WINDOW_H
#define WINDOW_H

#include <QAction>
#include <QActionGroup>
#include <QCloseEvent>
#include <QMainWindow>
#include <QStatusBar>
#include <QToolBar>


class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    void loadSettings();
    void saveSettings();

    QAction *m_actionAbout;
    QAction *m_actionColophon;
    QAction *m_actionPreferences;
    QAction *m_actionQuit;

    QAction *m_actionMenubar;
    QAction *m_actionToolbarApplication;
    QAction *m_actionToolbarFile;
    QAction *m_actionToolbarEdit;
    QAction *m_actionToolbarView;
    QAction *m_actionToolbarFormat;
    QAction *m_actionToolbarTools;
    QAction *m_actionToolbarAppearance;
    QAction *m_actionToolbarHelp;
    QActionGroup *m_actionsToolButtonStyle;
    QAction *m_actionStatusbar;

    void createActions();

    void createMenuBar();

    QStatusBar *m_statusbar;

    void createStatusBar();

    QToolBar *m_toolbarApplication;
    QToolBar *m_toolbarFile;
    QToolBar *m_toolbarEdit;
    QToolBar *m_toolbarView;
    QToolBar *m_toolbarFormat;
    QToolBar *m_toolbarTools;
    QToolBar *m_toolbarAppearance;
    QToolBar *m_toolbarHelp;

    void createToolBars();

    void updateActionsToolButtonStyle(const Qt::ToolButtonStyle toolButtonStyle);

private slots:
    void onActionAboutTriggered();
    void onActionColophonTriggered();
    void onActionPreferencesTriggered();

    void onActionsToolButtonStyleTriggered(const QAction *actionToolButtonStyle);
};

#endif // WINDOW_H
