/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_VDPA_H_
#define _UAPI_LINUX_VDPA_H_
#define VDPA_GENL_NAME "vdpa"
#define VDPA_GENL_VERSION 0x1
enum vdpa_command {
  VDPA_CMD_UNSPEC,
  VDPA_CMD_MGMTDEV_NEW,
  VDPA_CMD_MGMTDEV_GET,
  VDPA_CMD_DEV_NEW,
  VDPA_CMD_DEV_DEL,
  VDPA_CMD_DEV_GET,
  VDPA_CMD_DEV_CONFIG_GET,
  VDPA_CMD_DEV_VSTATS_GET,
};
enum vdpa_attr {
  VDPA_ATTR_UNSPEC,
  VDPA_ATTR_PAD = VDPA_ATTR_UNSPEC,
  VDPA_ATTR_MGMTDEV_BUS_NAME,
  VDPA_ATTR_MGMTDEV_DEV_NAME,
  VDPA_ATTR_MGMTDEV_SUPPORTED_CLASSES,
  VDPA_ATTR_DEV_NAME,
  VDPA_ATTR_DEV_ID,
  VDPA_ATTR_DEV_VENDOR_ID,
  VDPA_ATTR_DEV_MAX_VQS,
  VDPA_ATTR_DEV_MAX_VQ_SIZE,
  VDPA_ATTR_DEV_MIN_VQ_SIZE,
  VDPA_ATTR_DEV_NET_CFG_MACADDR,
  VDPA_ATTR_DEV_NET_STATUS,
  VDPA_ATTR_DEV_NET_CFG_MAX_VQP,
  VDPA_ATTR_DEV_NET_CFG_MTU,
  VDPA_ATTR_DEV_NEGOTIATED_FEATURES,
  VDPA_ATTR_DEV_MGMTDEV_MAX_VQS,
  VDPA_ATTR_DEV_SUPPORTED_FEATURES,
  VDPA_ATTR_DEV_QUEUE_INDEX,
  VDPA_ATTR_DEV_VENDOR_ATTR_NAME,
  VDPA_ATTR_DEV_VENDOR_ATTR_VALUE,
  VDPA_ATTR_DEV_FEATURES,
  VDPA_ATTR_MAX,
};
#endif
