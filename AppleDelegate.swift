//

import AppCenter
import AppCenterAnalytics
import AppCenterCrashes
import AppCenter
import AppCenterAnalytics
import AppCenterCrashes

//  File.swift
//  Unity-iPhone
//
//  Created by Connor Kordes on 6/4/20.
//

import Foundation


MSAppCenter.start("340e6441-3bb5-48e3-8b29-7bc6800a34ac", withServices:[
  MSAnalytics.self,
  MSCrashes.self
])
