// MESSAGE D3_PitchRoll PACKING

#define MAVLINK_MSG_ID_D3_PitchRoll 198

typedef struct __mavlink_d3_pitchroll_t
{
 uint64_t timestamp; ///< Timestamp frame (pixhawk timestamp)
 float pitch; ///< x pitch in rad
 float roll; ///< y roll in rad
} mavlink_d3_pitchroll_t;

#define MAVLINK_MSG_ID_D3_PitchRoll_LEN 16
#define MAVLINK_MSG_ID_198_LEN 16

#define MAVLINK_MSG_ID_D3_PitchRoll_CRC 254
#define MAVLINK_MSG_ID_198_CRC 254



#define MAVLINK_MESSAGE_INFO_D3_PitchRoll { \
	"D3_PitchRoll", \
	3, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_d3_pitchroll_t, timestamp) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_d3_pitchroll_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_d3_pitchroll_t, roll) }, \
         } \
}


/**
 * @brief Pack a d3_pitchroll message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Timestamp frame (pixhawk timestamp)
 * @param pitch x pitch in rad
 * @param roll y roll in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_pitchroll_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t timestamp, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_PitchRoll_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, pitch);
	_mav_put_float(buf, 12, roll);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#else
	mavlink_d3_pitchroll_t packet;
	packet.timestamp = timestamp;
	packet.pitch = pitch;
	packet.roll = roll;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_PitchRoll;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
}

/**
 * @brief Pack a d3_pitchroll message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp frame (pixhawk timestamp)
 * @param pitch x pitch in rad
 * @param roll y roll in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_d3_pitchroll_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t timestamp,float pitch,float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_PitchRoll_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, pitch);
	_mav_put_float(buf, 12, roll);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#else
	mavlink_d3_pitchroll_t packet;
	packet.timestamp = timestamp;
	packet.pitch = pitch;
	packet.roll = roll;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_D3_PitchRoll;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
}

/**
 * @brief Encode a d3_pitchroll struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param d3_pitchroll C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_pitchroll_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_d3_pitchroll_t* d3_pitchroll)
{
	return mavlink_msg_d3_pitchroll_pack(system_id, component_id, msg, d3_pitchroll->timestamp, d3_pitchroll->pitch, d3_pitchroll->roll);
}

/**
 * @brief Encode a d3_pitchroll struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param d3_pitchroll C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_d3_pitchroll_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_d3_pitchroll_t* d3_pitchroll)
{
	return mavlink_msg_d3_pitchroll_pack_chan(system_id, component_id, chan, msg, d3_pitchroll->timestamp, d3_pitchroll->pitch, d3_pitchroll->roll);
}

/**
 * @brief Send a d3_pitchroll message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Timestamp frame (pixhawk timestamp)
 * @param pitch x pitch in rad
 * @param roll y roll in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_d3_pitchroll_send(mavlink_channel_t chan, uint64_t timestamp, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_D3_PitchRoll_LEN];
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, pitch);
	_mav_put_float(buf, 12, roll);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
#else
	mavlink_d3_pitchroll_t packet;
	packet.timestamp = timestamp;
	packet.pitch = pitch;
	packet.roll = roll;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, (const char *)&packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, (const char *)&packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_D3_PitchRoll_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_d3_pitchroll_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, timestamp);
	_mav_put_float(buf, 8, pitch);
	_mav_put_float(buf, 12, roll);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, buf, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
#else
	mavlink_d3_pitchroll_t *packet = (mavlink_d3_pitchroll_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->pitch = pitch;
	packet->roll = roll;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, (const char *)packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN, MAVLINK_MSG_ID_D3_PitchRoll_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_D3_PitchRoll, (const char *)packet, MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE D3_PitchRoll UNPACKING


/**
 * @brief Get field timestamp from d3_pitchroll message
 *
 * @return Timestamp frame (pixhawk timestamp)
 */
static inline uint64_t mavlink_msg_d3_pitchroll_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pitch from d3_pitchroll message
 *
 * @return x pitch in rad
 */
static inline float mavlink_msg_d3_pitchroll_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field roll from d3_pitchroll message
 *
 * @return y roll in rad
 */
static inline float mavlink_msg_d3_pitchroll_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a d3_pitchroll message into a struct
 *
 * @param msg The message to decode
 * @param d3_pitchroll C-struct to decode the message contents into
 */
static inline void mavlink_msg_d3_pitchroll_decode(const mavlink_message_t* msg, mavlink_d3_pitchroll_t* d3_pitchroll)
{
#if MAVLINK_NEED_BYTE_SWAP
	d3_pitchroll->timestamp = mavlink_msg_d3_pitchroll_get_timestamp(msg);
	d3_pitchroll->pitch = mavlink_msg_d3_pitchroll_get_pitch(msg);
	d3_pitchroll->roll = mavlink_msg_d3_pitchroll_get_roll(msg);
#else
	memcpy(d3_pitchroll, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_D3_PitchRoll_LEN);
#endif
}
