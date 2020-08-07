#ifndef REFEREEVIEW_H
#define REFEREEVIEW_H

#include <src/entity/entity.h>
#include <src/entity/refereeview/mainwindow/mainwindow.h>

class RefereeView : public Entity
{
public:
    RefereeView();
    ~RefereeView();

    QString name();

    static void updateDetection(fira_message::Frame frame);
    static void addRefereeCommand(QString command);
    static void addRefereeWarning(QString command);
    static void setCurrentTime(int time);
    static void setRefereeCommand(QString command);
    static bool getBlueIsLeftSide();

private:
    // Entity inherited methods
    void initialization();
    void loop();
    void finalization();

    // UI
    static MainWindow *_refereeUI;
};

#endif // REFEREEVIEW_H