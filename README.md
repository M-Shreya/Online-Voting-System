# 🗳️ Online Voting System

A PHP-based Online Voting System allowing secure and efficient voting process.

## Requirements
- PHP 7.4+
- MySQL (local or cloud server)
- Web server (e.g., Apache)

## Features
- Secure User and Party registration
- Easy vote casting and result calculation
- Real-time result display
- Does not allow a user to vote twice

## Installation

### Set up the database
- Import `database.sql` file into your MySQL database using MySQL Workbench or any other preferred tool.
- **Note**: A MySQL cloud server has been used here. Update the database credentials in `config.php` with your cloud server credentials.

### Configure the application
- Update the database configuration in `config.php` with your database credentials.

### Run the application
- Place the project folder in your web server's root directory (e.g., `htdocs` for XAMPP).
- Start your web server and navigate to `http://localhost/OnlineVoting`.

## Usage

- **Admin Login**: `admin/admin`
- **User Login**: Register a new user or use provided credentials.

---

