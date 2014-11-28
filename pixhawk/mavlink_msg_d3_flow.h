// MESSAGE D3_FLOW PACKING

#define MAVLINK_MSG_ID_D3_FLOW 197

typedef struct __mavlink_d3_flow_t
{
 uint64_t timestamp_from; ///< Timestamp frame (local hw-time offboard)
 uint64_t timestamp_to; ///< Timestamp next frame (local hw-time offboard)
 float x; ///< x flow in rad
 float y; ///< y flow in rad
} mavlink_d3_flow_t;

#define MAVLINK_MSG_ID_D3_FLOW_LEN 24
#define MAVLINK_MSG_ID_197_LEN 24

#define MAVLINK_MSG_ID_D3_FLOW_CRC 74
#define MAVLINK_MSG_ID_197_CRC 74



#define MAVLINK_MESSAGE_INFO_D3_FLOW { \
	"D3_FLOW", \
	4, \
	{  { "timestamp_from", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_d3_flow_t, timestamp_from) }, \
         { "timestamp_to", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_d3_flow_t, timestamp_to) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_d3_flow_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_d3_flow_t, y) }, \
         } \
}


/**
 * @brief Pack a d3_flow message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_from Timestamp frame (local hw-time offboard)
 * @param timestamp_to Timestamp next frame (local hw-time offboard)
 * @param x x flow in rad
 * @param y y flow in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_flow_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp_from, uint64_t timestamp_to, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_FLOW_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_from);
	_mav_put_uint64_t(buf, 8, timestamp_to);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_FLOW_LEN);
#else
	mavlink_d3_flow_t packet;
	packet.timestamp_from = timestamp_from;
	packet.timestamp_to = timestamp_to;
	packet.x = x;
	packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_FLOW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
}

/**
 * @brief Pack a d3_flow message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_from Timestamp frame (local hw-time offboard)
 * @param timestamp_to Timestamp next frame (local hw-time offboard)
 * @param x x flow in rad
 * @param y y flow in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_flow_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp_from,uint64_t timestamp_to,float x,float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_FLOW_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_from);
	_mav_put_uint64_t(buf, 8, timestamp_to);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_FLOW_LEN);
#else
	mavlink_d3_flow_t packet;
	packet.timestamp_from = timestamp_from;
	packet.timestamp_to = timestamp_to;
	packet.x = x;
	packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_FLOW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
}

/**
 * @brief Encode a d3_flow struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param d3_flow C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_flow_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_d3_flow_t* d3_flow)
{
	return mavlink_msg_d3_flow_pack(system_id, component_id, msg, d3_flow->timestamp_from, d3_flow->timestamp_to, d3_flow->x, d3_flow->y);
}

/**
 * @brief Encode a d3_flow struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param d3_flow C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_flow_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_d3_flow_t* d3_flow)
{
	return mavlink_msg_d3_flow_pack_chan(system_id, component_id, chan, msg, d3_flow->timestamp_from, d3_flow->timestamp_to, d3_flow->x, d3_flow->y);
}

/**
 * @brief Send a d3_flow message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_from Timestamp frame (local hw-time offboard)
 * @param timestamp_to Timestamp next frame (local hw-time offboard)
 * @param x x flow in rad
 * @param y y flow in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_d3_flow_send(mavlink_channel_t chan, uint64_t timestamp_from, uint64_t timestamp_to, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_FLOW_LEN];
	_mav_put_uint64_t(buf, 0, timestamp_from);
	_mav_put_uint64_t(buf, 8, timestamp_to);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, buf, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, buf, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
#else
	mavlink_d3_flow_t packet;
	packet.timestamp_from = timestamp_from;
	packet.timestamp_to = timestamp_to;
	packet.x = x;
	packet.y = y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, (const char *)&packet, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, (const char *)&packet, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_D3_FLOW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_d3_flow_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_from, uint64_t timestamp_to, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp_from);
	_mav_put_uint64_t(buf, 8, timestamp_to);
	_mav_put_float(buf, 16, x);
	_mav_put_float(buf, 20, y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, buf, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, buf, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
#else
	mavlink_d3_flow_t *packet = (mavlink_d3_flow_t *)msgbuf;
	packet->timestamp_from = timestamp_from;
	packet->timestamp_to = timestamp_to;
	packet->x = x;
	packet->y = y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, (const char *)packet, MAVLINK_MSG_ID_D3_FLOW_LEN, MAVLINK_MSG_ID_D3_FLOW_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_FLOW, (const char *)packet, MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE D3_FLOW UNPACKING


/**
 * @brief Get field timestamp_from from d3_flow message
 *
 * @return Timestamp frame (local hw-time offboard)
 */
static inline uint64_t mavlink_msg_d3_flow_get_timestamp_from(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field timestamp_to from d3_flow message
 *
 * @return Timestamp next frame (local hw-time offboard)
 */
static inline uint64_t mavlink_msg_d3_flow_get_timestamp_to(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field x from d3_flow message
 *
 * @return x flow in rad
 */
static inline float mavlink_msg_d3_flow_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field y from d3_flow message
 *
 * @return y flow in rad
 */
static inline float mavlink_msg_d3_flow_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a d3_flow message into a struct
 *
 * @param msg The message to decode
 * @param d3_flow C-struct to decode the message contents into
 */
static inline void mavlink_msg_d3_flow_decode(const mavlink_message_t* msg, mavlink_d3_flow_t* d3_flow)
{
#if MAVLINK_NEED_BYTE_SWAP
	d3_flow->timestamp_from = mavlink_msg_d3_flow_get_timestamp_from(msg);
	d3_flow->timestamp_to = mavlink_msg_d3_flow_get_timestamp_to(msg);
	d3_flow->x = mavlink_msg_d3_flow_get_x(msg);
	d3_flow->y = mavlink_msg_d3_flow_get_y(msg);
#else
	memcpy(d3_flow, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_D3_FLOW_LEN);
#endif
}
