// MESSAGE D3_TARGET PACKING

#define MAVLINK_MSG_ID_D3_TARGET 196

typedef struct __mavlink_d3_target_t
{
 uint64_t timestamp; ///< Timestamp (local hw-time offboard)
 float x; ///< x diff to target in rad 0 = over the target
 float y; ///< y diff to target in rad 0 = over the target
} mavlink_d3_target_t;

#define MAVLINK_MSG_ID_D3_TARGET_LEN 16
#define MAVLINK_MSG_ID_196_LEN 16

#define MAVLINK_MSG_ID_D3_TARGET_CRC 226
#define MAVLINK_MSG_ID_196_CRC 226



#define MAVLINK_MESSAGE_INFO_D3_TARGET { \
	"D3_TARGET", \
	3, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_d3_target_t, timestamp) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_d3_target_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_d3_target_t, y) }, \
         } \
}


/**
 * @brief Pack a d3_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Timestamp (local hw-time offboard)
 * @param x x diff to target in rad 0 = over the target
 * @param y y diff to target in rad 0 = over the target
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_TARGET_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_TARGET_LEN);
#else
	mavlink_d3_target_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_TARGET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
}

/**
 * @brief Pack a d3_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp (local hw-time offboard)
 * @param x x diff to target in rad 0 = over the target
 * @param y y diff to target in rad 0 = over the target
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,float x,float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_TARGET_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_TARGET_LEN);
#else
	mavlink_d3_target_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_TARGET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
}

/**
 * @brief Encode a d3_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param d3_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_d3_target_t* d3_target)
{
	return mavlink_msg_d3_target_pack(system_id, component_id, msg, d3_target->timestamp, d3_target->x, d3_target->y);
}

/**
 * @brief Encode a d3_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param d3_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_d3_target_t* d3_target)
{
	return mavlink_msg_d3_target_pack_chan(system_id, component_id, chan, msg, d3_target->timestamp, d3_target->x, d3_target->y);
}

/**
 * @brief Send a d3_target message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Timestamp (local hw-time offboard)
 * @param x x diff to target in rad 0 = over the target
 * @param y y diff to target in rad 0 = over the target
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_d3_target_send(mavlink_channel_t chan, uint64_t timestamp, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_TARGET_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, buf, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, buf, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
#else
	mavlink_d3_target_t packet;
	packet.timestamp = timestamp;
	packet.x = x;
	packet.y = y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, (const char *)&packet, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, (const char *)&packet, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_D3_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_d3_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float x, float y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, buf, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, buf, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
#else
	mavlink_d3_target_t *packet = (mavlink_d3_target_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->x = x;
	packet->y = y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, (const char *)packet, MAVLINK_MSG_ID_D3_TARGET_LEN, MAVLINK_MSG_ID_D3_TARGET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_TARGET, (const char *)packet, MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE D3_TARGET UNPACKING


/**
 * @brief Get field timestamp from d3_target message
 *
 * @return Timestamp (local hw-time offboard)
 */
static inline uint64_t mavlink_msg_d3_target_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from d3_target message
 *
 * @return x diff to target in rad 0 = over the target
 */
static inline float mavlink_msg_d3_target_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from d3_target message
 *
 * @return y diff to target in rad 0 = over the target
 */
static inline float mavlink_msg_d3_target_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a d3_target message into a struct
 *
 * @param msg The message to decode
 * @param d3_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_d3_target_decode(const mavlink_message_t* msg, mavlink_d3_target_t* d3_target)
{
#if MAVLINK_NEED_BYTE_SWAP
	d3_target->timestamp = mavlink_msg_d3_target_get_timestamp(msg);
	d3_target->x = mavlink_msg_d3_target_get_x(msg);
	d3_target->y = mavlink_msg_d3_target_get_y(msg);
#else
	memcpy(d3_target, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_D3_TARGET_LEN);
#endif
}
