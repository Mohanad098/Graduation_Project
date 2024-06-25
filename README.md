# Driver Monitoring System

## Overview
The Driver Monitoring System is designed to enhance road safety by detecting and analyzing the driver's head pose and eye gaze. The system consists of two main applications:

1. **Jetson Nano Application**: Runs on a Jetson Nano board, responsible for real-time head pose and eye gaze detection.
2. **Windows Application**: Connects to the Jetson Nano, allowing users to view model outputs, frames, and configure the system.

## Features
- **Real-Time Detection**: Detects driver's head pose and eye gaze using TensorRT models.
- **Modular Design**: Easy to extend and integrate additional components.
- **Cross-Platform Support**: Applications run on both Jetson Nano and Windows.
- **User-Friendly Interface**: Provides an intuitive interface for viewing and configuring the system.



## Installation
### Prerequisites
- Jetson Nano board with JetPack SDK (4.6.4)
- Windows PC (with QT installed)
- Required libraries and dependencies (listed in each application's README)


## Usage
### Jetson Nano Application
Navigate to the Jetson Nano application directory and follow the instructions in the `Jetson SW/README.md`.

### Windows Application
Navigate to the Windows application directory and follow the instructions in the `DesktopApp/README.md`.
