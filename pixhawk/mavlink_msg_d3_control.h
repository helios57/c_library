// MESSAGE D3_Control PACKING

#define MAVLINK_MSG_ID_D3_Control 199

typedef struct __mavlink_d3_control_t
{
 float x; ///< local x position setpoint in meter and NED
 float y; ///< local y position setpoint in meter and NED
 float z; ///< local z position setpoint in meter and NED below ground (positive = down)
 uint8_t state; ///< 0: Position Control, 1: Landing, 2: Starting, 3: Follow Target 
} mavlink_d3_control_t;

#define MAVLINK_MSG_ID_D3_Control_LEN 13
#define MAVLINK_MSG_ID_199_LEN 13

#define MAVLINK_MSG_ID_D3_Control_CRC 91
#define MAVLINK_MSG_ID_199_CRC 91



#define MAVLINK_MESSAGE_INFO_D3_Control { \
	"D3_Control", \
	4, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_d3_control_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_d3_control_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_d3_control_t, z) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_d3_control_t, state) }, \
         } \
}


/**
 * @brief Pack a d3_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state 0: Position Control, 1: Landing, 2: Starting, 3: Follow Target 
 * @param x local x position setpoint in meter and NED
 * @param y local y position setpoint in meter and NED
 * @param z local z position setpoint in meter and NED below ground (positive = down)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t state, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_Control_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_uint8_t(buf, 12, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_Control_LEN);
#else
	mavlink_d3_control_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_Control_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_Control;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
}

/**
 * @brief Pack a d3_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state 0: Position Control, 1: Landing, 2: Starting, 3: Follow Target 
 * @param x local x position setpoint in meter and NED
 * @param y local y position setpoint in meter and NED
 * @param z local z position setpoint in meter and NED below ground (positive = down)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t state,float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_Control_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_uint8_t(buf, 12, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_Control_LEN);
#else
	mavlink_d3_control_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_Control_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_Control;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
}

/**
 * @brief Encode a d3_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param d3_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_d3_control_t* d3_control)
{
	return mavlink_msg_d3_control_pack(system_id, component_id, msg, d3_control->state, d3_control->x, d3_control->y, d3_control->z);
}

/**
 * @brief Encode a d3_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param d3_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_d3_control_t* d3_control)
{
	return mavlink_msg_d3_control_pack_chan(system_id, component_id, chan, msg, d3_control->state, d3_control->x, d3_control->y, d3_control->z);
}

/**
 * @brief Send a d3_control message
 * @param chan MAVLink channel to send the message
 *
 * @param state 0: Position Control, 1: Landing, 2: Starting, 3: Follow Target 
 * @param x local x position setpoint in meter and NED
 * @param y local y position setpoint in meter and NED
 * @param z local z position setpoint in meter and NED below ground (positive = down)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_d3_control_send(mavlink_channel_t chan, uint8_t state, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_Control_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_uint8_t(buf, 12, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, buf, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, buf, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
#else
	mavlink_d3_control_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, (const char *)&packet, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, (const char *)&packet, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_D3_Control_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_d3_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_uint8_t(buf, 12, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, buf, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, buf, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
#else
	mavlink_d3_control_t *packet = (mavlink_d3_control_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, (const char *)packet, MAVLINK_MSG_ID_D3_Control_LEN, MAVLINK_MSG_ID_D3_Control_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_Control, (const char *)packet, MAVLINK_MSG_ID_D3_Control_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE D3_Control UNPACKING


/**
 * @brief Get field state from d3_control message
 *
 * @return 0: Position Control, 1: Landing, 2: Starting, 3: Follow Target 
 */
static inline uint8_t mavlink_msg_d3_control_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field x from d3_control message
 *
 * @return local x position setpoint in meter and NED
 */
static inline float mavlink_msg_d3_control_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from d3_control message
 *
 * @return local y position setpoint in meter and NED
 */
static inline float mavlink_msg_d3_control_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from d3_control message
 *
 * @return local z position setpoint in meter and NED below ground (positive = down)
 */
static inline float mavlink_msg_d3_control_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a d3_control message into a struct
 *
 * @param msg The message to decode
 * @param d3_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_d3_control_decode(const mavlink_message_t* msg, mavlink_d3_control_t* d3_control)
{
#if MAVLINK_NEED_BYTE_SWAP
	d3_control->x = mavlink_msg_d3_control_get_x(msg);
	d3_control->y = mavlink_msg_d3_control_get_y(msg);
	d3_control->z = mavlink_msg_d3_control_get_z(msg);
	d3_control->state = mavlink_msg_d3_control_get_state(msg);
#else
	memcpy(d3_control, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_D3_Control_LEN);
#endif
}
