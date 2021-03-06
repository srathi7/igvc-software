#ifndef ESTOP_PANEL_H
#define ESTOP_PANEL_H

#include <ros/ros.h>
#include <QLabel>
#include <std_msgs/Bool.h>

#include <rviz/panel.h>

class QLineEdit;

namespace rviz_plugins
{

class EStopPanel: public rviz::Panel
{
  Q_OBJECT
  public:
    EStopPanel( QWidget* parent = 0 );

  private:
    void subCallback(const std_msgs::Bool &msg);

  protected:
    ros::Subscriber sub;
    ros::NodeHandle nh_;
    QLabel* output_topic_editor_;

};

}

#endif // ESTOP_PANEL_H