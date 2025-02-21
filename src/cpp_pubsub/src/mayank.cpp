// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "traffic_light_msgs/msg/traffic_light_struct.hpp"
// #include "image/image_lights.h"

using std::placeholders::_1;

    // explicit Processor(const rclcpp::NodeOptions &options)


class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("mayank_subscriber")
  {
    // subscription_ = this->create_subscription<std_msgs::msg::String>( "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    // subscription_ = this->create_subscription<std_msgs::msg::String>( "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    subscription_ = this->create_subscription<traffic_light_msgs::msg::TrafficLightStruct>( "/tl_bbox_info_new", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    std::cout<<"process___________________________________________________"<<std::endl;
    // auto callback = std::bind(&MinimalSubscriber::topic_callback, this, _1);
    // subscription_ = this->create_subscription<traffic_light_msgs::msg::TrafficLightStruct>("/tl_bbox_info_new", 10, callback);
  }

private:
  void topic_callback(const traffic_light_msgs::msg::TrafficLightStruct::SharedPtr msg) const
  {
    std::cout<<1<<std::endl;
    // RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    // RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->selected_box;
    // RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->msg->detections;
     }
  rclcpp::Subscription<traffic_light_msgs::msg::TrafficLightStruct>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}
