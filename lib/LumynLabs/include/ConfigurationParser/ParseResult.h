#pragma once

namespace Configuration {
enum class ParseResult {
  Valid = 1,
  CannotOpenFile = 0,
  FileNotFound = -1,
  MissingNetwork = -2,
  InvalidNetwork = -3,
  MissingChannelId = -4,
  InvalidZoneType = -5,
  InvalidBitmapType = -6,
  InvalidSensorConnectionType = -7,
  DuplicateId = -8,
  HashCollision = -9,
  DeserializationError = -10,
  MissingChannels = -11,
  InvalidChannel = -12,
  InvalidZone = -13,
  InvalidAnimationSequence = -14,
  InvalidAnimation = -15,
  InvalidAnimationColor = -16,
  InvalidBitmap = -17,
  InvalidSensor = -18,
  InvalidAnimationGroup = -19,
  MissingZoneId = -20,
  MissingAnimationSequenceId = -21,
  MissingAnimationId = -22,
  MissingBitmapId = -23,
  MissingSensorId = -24,
  MissingGroupId = -25,
  InvalidBrightness = -26,
  InvalidTeamNumber = -27,
  MissingZoneOrientation = -28,
  InvalidZoneOrientation = -29,
  MissingSensorPollingRate = -30,
};
}  // namespace Configuration