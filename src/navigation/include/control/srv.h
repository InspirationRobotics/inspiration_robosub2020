#ifndef SRV_H
#define SRV_H

extern ros::ServiceClient arming_client;
extern ros::ServiceClient mode_client;

void initSrv(ros::NodeHandle *n);

#endif
