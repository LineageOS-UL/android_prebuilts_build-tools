/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __LINUX_PKT_CLS_H
#define __LINUX_PKT_CLS_H
#include <linux/types.h>
#include <linux/pkt_sched.h>
#define TC_COOKIE_MAX_SIZE 16
enum {
  TCA_ACT_UNSPEC,
  TCA_ACT_KIND,
  TCA_ACT_OPTIONS,
  TCA_ACT_INDEX,
  TCA_ACT_STATS,
  TCA_ACT_PAD,
  TCA_ACT_COOKIE,
  TCA_ACT_FLAGS,
  TCA_ACT_HW_STATS,
  TCA_ACT_USED_HW_STATS,
  TCA_ACT_IN_HW_COUNT,
  __TCA_ACT_MAX
};
#define TCA_ACT_FLAGS_NO_PERCPU_STATS (1 << 0)
#define TCA_ACT_FLAGS_SKIP_HW (1 << 1)
#define TCA_ACT_FLAGS_SKIP_SW (1 << 2)
#define TCA_ACT_HW_STATS_IMMEDIATE (1 << 0)
#define TCA_ACT_HW_STATS_DELAYED (1 << 1)
#define TCA_ACT_MAX __TCA_ACT_MAX
#define TCA_OLD_COMPAT (TCA_ACT_MAX + 1)
#define TCA_ACT_MAX_PRIO 32
#define TCA_ACT_BIND 1
#define TCA_ACT_NOBIND 0
#define TCA_ACT_UNBIND 1
#define TCA_ACT_NOUNBIND 0
#define TCA_ACT_REPLACE 1
#define TCA_ACT_NOREPLACE 0
#define TC_ACT_UNSPEC (- 1)
#define TC_ACT_OK 0
#define TC_ACT_RECLASSIFY 1
#define TC_ACT_SHOT 2
#define TC_ACT_PIPE 3
#define TC_ACT_STOLEN 4
#define TC_ACT_QUEUED 5
#define TC_ACT_REPEAT 6
#define TC_ACT_REDIRECT 7
#define TC_ACT_TRAP 8
#define TC_ACT_VALUE_MAX TC_ACT_TRAP
#define __TC_ACT_EXT_SHIFT 28
#define __TC_ACT_EXT(local) ((local) << __TC_ACT_EXT_SHIFT)
#define TC_ACT_EXT_VAL_MASK ((1 << __TC_ACT_EXT_SHIFT) - 1)
#define TC_ACT_EXT_OPCODE(combined) ((combined) & (~TC_ACT_EXT_VAL_MASK))
#define TC_ACT_EXT_CMP(combined,opcode) (TC_ACT_EXT_OPCODE(combined) == opcode)
#define TC_ACT_JUMP __TC_ACT_EXT(1)
#define TC_ACT_GOTO_CHAIN __TC_ACT_EXT(2)
#define TC_ACT_EXT_OPCODE_MAX TC_ACT_GOTO_CHAIN
#define TCA_ACT_GACT 5
#define TCA_ACT_IPT 6
#define TCA_ACT_PEDIT 7
#define TCA_ACT_MIRRED 8
#define TCA_ACT_NAT 9
#define TCA_ACT_XT 10
#define TCA_ACT_SKBEDIT 11
#define TCA_ACT_VLAN 12
#define TCA_ACT_BPF 13
#define TCA_ACT_CONNMARK 14
#define TCA_ACT_SKBMOD 15
#define TCA_ACT_CSUM 16
#define TCA_ACT_TUNNEL_KEY 17
#define TCA_ACT_SIMP 22
#define TCA_ACT_IFE 25
#define TCA_ACT_SAMPLE 26
enum tca_id {
  TCA_ID_UNSPEC = 0,
  TCA_ID_POLICE = 1,
  TCA_ID_GACT = TCA_ACT_GACT,
  TCA_ID_IPT = TCA_ACT_IPT,
  TCA_ID_PEDIT = TCA_ACT_PEDIT,
  TCA_ID_MIRRED = TCA_ACT_MIRRED,
  TCA_ID_NAT = TCA_ACT_NAT,
  TCA_ID_XT = TCA_ACT_XT,
  TCA_ID_SKBEDIT = TCA_ACT_SKBEDIT,
  TCA_ID_VLAN = TCA_ACT_VLAN,
  TCA_ID_BPF = TCA_ACT_BPF,
  TCA_ID_CONNMARK = TCA_ACT_CONNMARK,
  TCA_ID_SKBMOD = TCA_ACT_SKBMOD,
  TCA_ID_CSUM = TCA_ACT_CSUM,
  TCA_ID_TUNNEL_KEY = TCA_ACT_TUNNEL_KEY,
  TCA_ID_SIMP = TCA_ACT_SIMP,
  TCA_ID_IFE = TCA_ACT_IFE,
  TCA_ID_SAMPLE = TCA_ACT_SAMPLE,
  TCA_ID_CTINFO,
  TCA_ID_MPLS,
  TCA_ID_CT,
  TCA_ID_GATE,
  __TCA_ID_MAX = 255
};
#define TCA_ID_MAX __TCA_ID_MAX
struct tc_police {
  __u32 index;
  int action;
#define TC_POLICE_UNSPEC TC_ACT_UNSPEC
#define TC_POLICE_OK TC_ACT_OK
#define TC_POLICE_RECLASSIFY TC_ACT_RECLASSIFY
#define TC_POLICE_SHOT TC_ACT_SHOT
#define TC_POLICE_PIPE TC_ACT_PIPE
  __u32 limit;
  __u32 burst;
  __u32 mtu;
  struct tc_ratespec rate;
  struct tc_ratespec peakrate;
  int refcnt;
  int bindcnt;
  __u32 capab;
};
struct tcf_t {
  __u64 install;
  __u64 lastuse;
  __u64 expires;
  __u64 firstuse;
};
struct tc_cnt {
  int refcnt;
  int bindcnt;
};
#define tc_gen __u32 index; __u32 capab; int action; int refcnt; int bindcnt
enum {
  TCA_POLICE_UNSPEC,
  TCA_POLICE_TBF,
  TCA_POLICE_RATE,
  TCA_POLICE_PEAKRATE,
  TCA_POLICE_AVRATE,
  TCA_POLICE_RESULT,
  TCA_POLICE_TM,
  TCA_POLICE_PAD,
  TCA_POLICE_RATE64,
  TCA_POLICE_PEAKRATE64,
  TCA_POLICE_PKTRATE64,
  TCA_POLICE_PKTBURST64,
  __TCA_POLICE_MAX
#define TCA_POLICE_RESULT TCA_POLICE_RESULT
};
#define TCA_POLICE_MAX (__TCA_POLICE_MAX - 1)
#define TCA_CLS_FLAGS_SKIP_HW (1 << 0)
#define TCA_CLS_FLAGS_SKIP_SW (1 << 1)
#define TCA_CLS_FLAGS_IN_HW (1 << 2)
#define TCA_CLS_FLAGS_NOT_IN_HW (1 << 3)
#define TCA_CLS_FLAGS_VERBOSE (1 << 4)
#define TC_U32_HTID(h) ((h) & 0xFFF00000)
#define TC_U32_USERHTID(h) (TC_U32_HTID(h) >> 20)
#define TC_U32_HASH(h) (((h) >> 12) & 0xFF)
#define TC_U32_NODE(h) ((h) & 0xFFF)
#define TC_U32_KEY(h) ((h) & 0xFFFFF)
#define TC_U32_UNSPEC 0
#define TC_U32_ROOT (0xFFF00000)
enum {
  TCA_U32_UNSPEC,
  TCA_U32_CLASSID,
  TCA_U32_HASH,
  TCA_U32_LINK,
  TCA_U32_DIVISOR,
  TCA_U32_SEL,
  TCA_U32_POLICE,
  TCA_U32_ACT,
  TCA_U32_INDEV,
  TCA_U32_PCNT,
  TCA_U32_MARK,
  TCA_U32_FLAGS,
  TCA_U32_PAD,
  __TCA_U32_MAX
};
#define TCA_U32_MAX (__TCA_U32_MAX - 1)
struct tc_u32_key {
  __be32 mask;
  __be32 val;
  int off;
  int offmask;
};
struct tc_u32_sel {
  unsigned char flags;
  unsigned char offshift;
  unsigned char nkeys;
  __be16 offmask;
  __u16 off;
  short offoff;
  short hoff;
  __be32 hmask;
  struct tc_u32_key keys[];
};
struct tc_u32_mark {
  __u32 val;
  __u32 mask;
  __u32 success;
};
struct tc_u32_pcnt {
  __u64 rcnt;
  __u64 rhit;
  __u64 kcnts[];
};
#define TC_U32_TERMINAL 1
#define TC_U32_OFFSET 2
#define TC_U32_VAROFFSET 4
#define TC_U32_EAT 8
#define TC_U32_MAXDEPTH 8
enum {
  TCA_RSVP_UNSPEC,
  TCA_RSVP_CLASSID,
  TCA_RSVP_DST,
  TCA_RSVP_SRC,
  TCA_RSVP_PINFO,
  TCA_RSVP_POLICE,
  TCA_RSVP_ACT,
  __TCA_RSVP_MAX
};
#define TCA_RSVP_MAX (__TCA_RSVP_MAX - 1)
struct tc_rsvp_gpi {
  __u32 key;
  __u32 mask;
  int offset;
};
struct tc_rsvp_pinfo {
  struct tc_rsvp_gpi dpi;
  struct tc_rsvp_gpi spi;
  __u8 protocol;
  __u8 tunnelid;
  __u8 tunnelhdr;
  __u8 pad;
};
enum {
  TCA_ROUTE4_UNSPEC,
  TCA_ROUTE4_CLASSID,
  TCA_ROUTE4_TO,
  TCA_ROUTE4_FROM,
  TCA_ROUTE4_IIF,
  TCA_ROUTE4_POLICE,
  TCA_ROUTE4_ACT,
  __TCA_ROUTE4_MAX
};
#define TCA_ROUTE4_MAX (__TCA_ROUTE4_MAX - 1)
enum {
  TCA_FW_UNSPEC,
  TCA_FW_CLASSID,
  TCA_FW_POLICE,
  TCA_FW_INDEV,
  TCA_FW_ACT,
  TCA_FW_MASK,
  __TCA_FW_MAX
};
#define TCA_FW_MAX (__TCA_FW_MAX - 1)
enum {
  TCA_TCINDEX_UNSPEC,
  TCA_TCINDEX_HASH,
  TCA_TCINDEX_MASK,
  TCA_TCINDEX_SHIFT,
  TCA_TCINDEX_FALL_THROUGH,
  TCA_TCINDEX_CLASSID,
  TCA_TCINDEX_POLICE,
  TCA_TCINDEX_ACT,
  __TCA_TCINDEX_MAX
};
#define TCA_TCINDEX_MAX (__TCA_TCINDEX_MAX - 1)
enum {
  FLOW_KEY_SRC,
  FLOW_KEY_DST,
  FLOW_KEY_PROTO,
  FLOW_KEY_PROTO_SRC,
  FLOW_KEY_PROTO_DST,
  FLOW_KEY_IIF,
  FLOW_KEY_PRIORITY,
  FLOW_KEY_MARK,
  FLOW_KEY_NFCT,
  FLOW_KEY_NFCT_SRC,
  FLOW_KEY_NFCT_DST,
  FLOW_KEY_NFCT_PROTO_SRC,
  FLOW_KEY_NFCT_PROTO_DST,
  FLOW_KEY_RTCLASSID,
  FLOW_KEY_SKUID,
  FLOW_KEY_SKGID,
  FLOW_KEY_VLAN_TAG,
  FLOW_KEY_RXHASH,
  __FLOW_KEY_MAX,
};
#define FLOW_KEY_MAX (__FLOW_KEY_MAX - 1)
enum {
  FLOW_MODE_MAP,
  FLOW_MODE_HASH,
};
enum {
  TCA_FLOW_UNSPEC,
  TCA_FLOW_KEYS,
  TCA_FLOW_MODE,
  TCA_FLOW_BASECLASS,
  TCA_FLOW_RSHIFT,
  TCA_FLOW_ADDEND,
  TCA_FLOW_MASK,
  TCA_FLOW_XOR,
  TCA_FLOW_DIVISOR,
  TCA_FLOW_ACT,
  TCA_FLOW_POLICE,
  TCA_FLOW_EMATCHES,
  TCA_FLOW_PERTURB,
  __TCA_FLOW_MAX
};
#define TCA_FLOW_MAX (__TCA_FLOW_MAX - 1)
struct tc_basic_pcnt {
  __u64 rcnt;
  __u64 rhit;
};
enum {
  TCA_BASIC_UNSPEC,
  TCA_BASIC_CLASSID,
  TCA_BASIC_EMATCHES,
  TCA_BASIC_ACT,
  TCA_BASIC_POLICE,
  TCA_BASIC_PCNT,
  TCA_BASIC_PAD,
  __TCA_BASIC_MAX
};
#define TCA_BASIC_MAX (__TCA_BASIC_MAX - 1)
enum {
  TCA_CGROUP_UNSPEC,
  TCA_CGROUP_ACT,
  TCA_CGROUP_POLICE,
  TCA_CGROUP_EMATCHES,
  __TCA_CGROUP_MAX,
};
#define TCA_CGROUP_MAX (__TCA_CGROUP_MAX - 1)
#define TCA_BPF_FLAG_ACT_DIRECT (1 << 0)
enum {
  TCA_BPF_UNSPEC,
  TCA_BPF_ACT,
  TCA_BPF_POLICE,
  TCA_BPF_CLASSID,
  TCA_BPF_OPS_LEN,
  TCA_BPF_OPS,
  TCA_BPF_FD,
  TCA_BPF_NAME,
  TCA_BPF_FLAGS,
  TCA_BPF_FLAGS_GEN,
  TCA_BPF_TAG,
  TCA_BPF_ID,
  __TCA_BPF_MAX,
};
#define TCA_BPF_MAX (__TCA_BPF_MAX - 1)
enum {
  TCA_FLOWER_UNSPEC,
  TCA_FLOWER_CLASSID,
  TCA_FLOWER_INDEV,
  TCA_FLOWER_ACT,
  TCA_FLOWER_KEY_ETH_DST,
  TCA_FLOWER_KEY_ETH_DST_MASK,
  TCA_FLOWER_KEY_ETH_SRC,
  TCA_FLOWER_KEY_ETH_SRC_MASK,
  TCA_FLOWER_KEY_ETH_TYPE,
  TCA_FLOWER_KEY_IP_PROTO,
  TCA_FLOWER_KEY_IPV4_SRC,
  TCA_FLOWER_KEY_IPV4_SRC_MASK,
  TCA_FLOWER_KEY_IPV4_DST,
  TCA_FLOWER_KEY_IPV4_DST_MASK,
  TCA_FLOWER_KEY_IPV6_SRC,
  TCA_FLOWER_KEY_IPV6_SRC_MASK,
  TCA_FLOWER_KEY_IPV6_DST,
  TCA_FLOWER_KEY_IPV6_DST_MASK,
  TCA_FLOWER_KEY_TCP_SRC,
  TCA_FLOWER_KEY_TCP_DST,
  TCA_FLOWER_KEY_UDP_SRC,
  TCA_FLOWER_KEY_UDP_DST,
  TCA_FLOWER_FLAGS,
  TCA_FLOWER_KEY_VLAN_ID,
  TCA_FLOWER_KEY_VLAN_PRIO,
  TCA_FLOWER_KEY_VLAN_ETH_TYPE,
  TCA_FLOWER_KEY_ENC_KEY_ID,
  TCA_FLOWER_KEY_ENC_IPV4_SRC,
  TCA_FLOWER_KEY_ENC_IPV4_SRC_MASK,
  TCA_FLOWER_KEY_ENC_IPV4_DST,
  TCA_FLOWER_KEY_ENC_IPV4_DST_MASK,
  TCA_FLOWER_KEY_ENC_IPV6_SRC,
  TCA_FLOWER_KEY_ENC_IPV6_SRC_MASK,
  TCA_FLOWER_KEY_ENC_IPV6_DST,
  TCA_FLOWER_KEY_ENC_IPV6_DST_MASK,
  TCA_FLOWER_KEY_TCP_SRC_MASK,
  TCA_FLOWER_KEY_TCP_DST_MASK,
  TCA_FLOWER_KEY_UDP_SRC_MASK,
  TCA_FLOWER_KEY_UDP_DST_MASK,
  TCA_FLOWER_KEY_SCTP_SRC_MASK,
  TCA_FLOWER_KEY_SCTP_DST_MASK,
  TCA_FLOWER_KEY_SCTP_SRC,
  TCA_FLOWER_KEY_SCTP_DST,
  TCA_FLOWER_KEY_ENC_UDP_SRC_PORT,
  TCA_FLOWER_KEY_ENC_UDP_SRC_PORT_MASK,
  TCA_FLOWER_KEY_ENC_UDP_DST_PORT,
  TCA_FLOWER_KEY_ENC_UDP_DST_PORT_MASK,
  TCA_FLOWER_KEY_FLAGS,
  TCA_FLOWER_KEY_FLAGS_MASK,
  TCA_FLOWER_KEY_ICMPV4_CODE,
  TCA_FLOWER_KEY_ICMPV4_CODE_MASK,
  TCA_FLOWER_KEY_ICMPV4_TYPE,
  TCA_FLOWER_KEY_ICMPV4_TYPE_MASK,
  TCA_FLOWER_KEY_ICMPV6_CODE,
  TCA_FLOWER_KEY_ICMPV6_CODE_MASK,
  TCA_FLOWER_KEY_ICMPV6_TYPE,
  TCA_FLOWER_KEY_ICMPV6_TYPE_MASK,
  TCA_FLOWER_KEY_ARP_SIP,
  TCA_FLOWER_KEY_ARP_SIP_MASK,
  TCA_FLOWER_KEY_ARP_TIP,
  TCA_FLOWER_KEY_ARP_TIP_MASK,
  TCA_FLOWER_KEY_ARP_OP,
  TCA_FLOWER_KEY_ARP_OP_MASK,
  TCA_FLOWER_KEY_ARP_SHA,
  TCA_FLOWER_KEY_ARP_SHA_MASK,
  TCA_FLOWER_KEY_ARP_THA,
  TCA_FLOWER_KEY_ARP_THA_MASK,
  TCA_FLOWER_KEY_MPLS_TTL,
  TCA_FLOWER_KEY_MPLS_BOS,
  TCA_FLOWER_KEY_MPLS_TC,
  TCA_FLOWER_KEY_MPLS_LABEL,
  TCA_FLOWER_KEY_TCP_FLAGS,
  TCA_FLOWER_KEY_TCP_FLAGS_MASK,
  TCA_FLOWER_KEY_IP_TOS,
  TCA_FLOWER_KEY_IP_TOS_MASK,
  TCA_FLOWER_KEY_IP_TTL,
  TCA_FLOWER_KEY_IP_TTL_MASK,
  TCA_FLOWER_KEY_CVLAN_ID,
  TCA_FLOWER_KEY_CVLAN_PRIO,
  TCA_FLOWER_KEY_CVLAN_ETH_TYPE,
  TCA_FLOWER_KEY_ENC_IP_TOS,
  TCA_FLOWER_KEY_ENC_IP_TOS_MASK,
  TCA_FLOWER_KEY_ENC_IP_TTL,
  TCA_FLOWER_KEY_ENC_IP_TTL_MASK,
  TCA_FLOWER_KEY_ENC_OPTS,
  TCA_FLOWER_KEY_ENC_OPTS_MASK,
  TCA_FLOWER_IN_HW_COUNT,
  TCA_FLOWER_KEY_PORT_SRC_MIN,
  TCA_FLOWER_KEY_PORT_SRC_MAX,
  TCA_FLOWER_KEY_PORT_DST_MIN,
  TCA_FLOWER_KEY_PORT_DST_MAX,
  TCA_FLOWER_KEY_CT_STATE,
  TCA_FLOWER_KEY_CT_STATE_MASK,
  TCA_FLOWER_KEY_CT_ZONE,
  TCA_FLOWER_KEY_CT_ZONE_MASK,
  TCA_FLOWER_KEY_CT_MARK,
  TCA_FLOWER_KEY_CT_MARK_MASK,
  TCA_FLOWER_KEY_CT_LABELS,
  TCA_FLOWER_KEY_CT_LABELS_MASK,
  TCA_FLOWER_KEY_MPLS_OPTS,
  TCA_FLOWER_KEY_HASH,
  TCA_FLOWER_KEY_HASH_MASK,
  TCA_FLOWER_KEY_NUM_OF_VLANS,
  TCA_FLOWER_KEY_PPPOE_SID,
  TCA_FLOWER_KEY_PPP_PROTO,
  TCA_FLOWER_KEY_L2TPV3_SID,
  TCA_FLOWER_L2_MISS,
  TCA_FLOWER_KEY_CFM,
  TCA_FLOWER_KEY_SPI,
  TCA_FLOWER_KEY_SPI_MASK,
  __TCA_FLOWER_MAX,
};
#define TCA_FLOWER_MAX (__TCA_FLOWER_MAX - 1)
enum {
  TCA_FLOWER_KEY_CT_FLAGS_NEW = 1 << 0,
  TCA_FLOWER_KEY_CT_FLAGS_ESTABLISHED = 1 << 1,
  TCA_FLOWER_KEY_CT_FLAGS_RELATED = 1 << 2,
  TCA_FLOWER_KEY_CT_FLAGS_TRACKED = 1 << 3,
  TCA_FLOWER_KEY_CT_FLAGS_INVALID = 1 << 4,
  TCA_FLOWER_KEY_CT_FLAGS_REPLY = 1 << 5,
  __TCA_FLOWER_KEY_CT_FLAGS_MAX,
};
enum {
  TCA_FLOWER_KEY_ENC_OPTS_UNSPEC,
  TCA_FLOWER_KEY_ENC_OPTS_GENEVE,
  TCA_FLOWER_KEY_ENC_OPTS_VXLAN,
  TCA_FLOWER_KEY_ENC_OPTS_ERSPAN,
  TCA_FLOWER_KEY_ENC_OPTS_GTP,
  __TCA_FLOWER_KEY_ENC_OPTS_MAX,
};
#define TCA_FLOWER_KEY_ENC_OPTS_MAX (__TCA_FLOWER_KEY_ENC_OPTS_MAX - 1)
enum {
  TCA_FLOWER_KEY_ENC_OPT_GENEVE_UNSPEC,
  TCA_FLOWER_KEY_ENC_OPT_GENEVE_CLASS,
  TCA_FLOWER_KEY_ENC_OPT_GENEVE_TYPE,
  TCA_FLOWER_KEY_ENC_OPT_GENEVE_DATA,
  __TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX,
};
#define TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX (__TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX - 1)
enum {
  TCA_FLOWER_KEY_ENC_OPT_VXLAN_UNSPEC,
  TCA_FLOWER_KEY_ENC_OPT_VXLAN_GBP,
  __TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX,
};
#define TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX (__TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX - 1)
enum {
  TCA_FLOWER_KEY_ENC_OPT_ERSPAN_UNSPEC,
  TCA_FLOWER_KEY_ENC_OPT_ERSPAN_VER,
  TCA_FLOWER_KEY_ENC_OPT_ERSPAN_INDEX,
  TCA_FLOWER_KEY_ENC_OPT_ERSPAN_DIR,
  TCA_FLOWER_KEY_ENC_OPT_ERSPAN_HWID,
  __TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX,
};
#define TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX (__TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX - 1)
enum {
  TCA_FLOWER_KEY_ENC_OPT_GTP_UNSPEC,
  TCA_FLOWER_KEY_ENC_OPT_GTP_PDU_TYPE,
  TCA_FLOWER_KEY_ENC_OPT_GTP_QFI,
  __TCA_FLOWER_KEY_ENC_OPT_GTP_MAX,
};
#define TCA_FLOWER_KEY_ENC_OPT_GTP_MAX (__TCA_FLOWER_KEY_ENC_OPT_GTP_MAX - 1)
enum {
  TCA_FLOWER_KEY_MPLS_OPTS_UNSPEC,
  TCA_FLOWER_KEY_MPLS_OPTS_LSE,
  __TCA_FLOWER_KEY_MPLS_OPTS_MAX,
};
#define TCA_FLOWER_KEY_MPLS_OPTS_MAX (__TCA_FLOWER_KEY_MPLS_OPTS_MAX - 1)
enum {
  TCA_FLOWER_KEY_MPLS_OPT_LSE_UNSPEC,
  TCA_FLOWER_KEY_MPLS_OPT_LSE_DEPTH,
  TCA_FLOWER_KEY_MPLS_OPT_LSE_TTL,
  TCA_FLOWER_KEY_MPLS_OPT_LSE_BOS,
  TCA_FLOWER_KEY_MPLS_OPT_LSE_TC,
  TCA_FLOWER_KEY_MPLS_OPT_LSE_LABEL,
  __TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX,
};
#define TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX (__TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX - 1)
enum {
  TCA_FLOWER_KEY_FLAGS_IS_FRAGMENT = (1 << 0),
  TCA_FLOWER_KEY_FLAGS_FRAG_IS_FIRST = (1 << 1),
};
enum {
  TCA_FLOWER_KEY_CFM_OPT_UNSPEC,
  TCA_FLOWER_KEY_CFM_MD_LEVEL,
  TCA_FLOWER_KEY_CFM_OPCODE,
  __TCA_FLOWER_KEY_CFM_OPT_MAX,
};
#define TCA_FLOWER_KEY_CFM_OPT_MAX (__TCA_FLOWER_KEY_CFM_OPT_MAX - 1)
#define TCA_FLOWER_MASK_FLAGS_RANGE (1 << 0)
struct tc_matchall_pcnt {
  __u64 rhit;
};
enum {
  TCA_MATCHALL_UNSPEC,
  TCA_MATCHALL_CLASSID,
  TCA_MATCHALL_ACT,
  TCA_MATCHALL_FLAGS,
  TCA_MATCHALL_PCNT,
  TCA_MATCHALL_PAD,
  __TCA_MATCHALL_MAX,
};
#define TCA_MATCHALL_MAX (__TCA_MATCHALL_MAX - 1)
struct tcf_ematch_tree_hdr {
  __u16 nmatches;
  __u16 progid;
};
enum {
  TCA_EMATCH_TREE_UNSPEC,
  TCA_EMATCH_TREE_HDR,
  TCA_EMATCH_TREE_LIST,
  __TCA_EMATCH_TREE_MAX
};
#define TCA_EMATCH_TREE_MAX (__TCA_EMATCH_TREE_MAX - 1)
struct tcf_ematch_hdr {
  __u16 matchid;
  __u16 kind;
  __u16 flags;
  __u16 pad;
};
#define TCF_EM_REL_END 0
#define TCF_EM_REL_AND (1 << 0)
#define TCF_EM_REL_OR (1 << 1)
#define TCF_EM_INVERT (1 << 2)
#define TCF_EM_SIMPLE (1 << 3)
#define TCF_EM_REL_MASK 3
#define TCF_EM_REL_VALID(v) (((v) & TCF_EM_REL_MASK) != TCF_EM_REL_MASK)
enum {
  TCF_LAYER_LINK,
  TCF_LAYER_NETWORK,
  TCF_LAYER_TRANSPORT,
  __TCF_LAYER_MAX
};
#define TCF_LAYER_MAX (__TCF_LAYER_MAX - 1)
#define TCF_EM_CONTAINER 0
#define TCF_EM_CMP 1
#define TCF_EM_NBYTE 2
#define TCF_EM_U32 3
#define TCF_EM_META 4
#define TCF_EM_TEXT 5
#define TCF_EM_VLAN 6
#define TCF_EM_CANID 7
#define TCF_EM_IPSET 8
#define TCF_EM_IPT 9
#define TCF_EM_MAX 9
enum {
  TCF_EM_PROG_TC
};
enum {
  TCF_EM_OPND_EQ,
  TCF_EM_OPND_GT,
  TCF_EM_OPND_LT
};
#endif
