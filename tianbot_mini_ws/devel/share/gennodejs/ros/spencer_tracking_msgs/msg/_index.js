
"use strict";

let CompositeDetectedPerson = require('./CompositeDetectedPerson.js');
let CompositeDetectedPersons = require('./CompositeDetectedPersons.js');
let DetectedPerson = require('./DetectedPerson.js');
let DetectedPersons = require('./DetectedPersons.js');
let ImmDebugInfo = require('./ImmDebugInfo.js');
let ImmDebugInfos = require('./ImmDebugInfos.js');
let PersonTrajectory = require('./PersonTrajectory.js');
let PersonTrajectoryEntry = require('./PersonTrajectoryEntry.js');
let TrackedGroup = require('./TrackedGroup.js');
let TrackedGroups = require('./TrackedGroups.js');
let TrackedPerson = require('./TrackedPerson.js');
let TrackedPerson2d = require('./TrackedPerson2d.js');
let TrackedPersons = require('./TrackedPersons.js');
let TrackedPersons2d = require('./TrackedPersons2d.js');
let TrackingTimingMetrics = require('./TrackingTimingMetrics.js');

module.exports = {
  CompositeDetectedPerson: CompositeDetectedPerson,
  CompositeDetectedPersons: CompositeDetectedPersons,
  DetectedPerson: DetectedPerson,
  DetectedPersons: DetectedPersons,
  ImmDebugInfo: ImmDebugInfo,
  ImmDebugInfos: ImmDebugInfos,
  PersonTrajectory: PersonTrajectory,
  PersonTrajectoryEntry: PersonTrajectoryEntry,
  TrackedGroup: TrackedGroup,
  TrackedGroups: TrackedGroups,
  TrackedPerson: TrackedPerson,
  TrackedPerson2d: TrackedPerson2d,
  TrackedPersons: TrackedPersons,
  TrackedPersons2d: TrackedPersons2d,
  TrackingTimingMetrics: TrackingTimingMetrics,
};
