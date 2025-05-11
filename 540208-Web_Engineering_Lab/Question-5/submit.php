<?php
$conn = new mysqli("localhost", "root", "", "formdb");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name     = $_POST['name'];
$email    = $_POST['email'];
$password = $_POST['password'];
$gender   = $_POST['gender'];
$hobbies  = implode(", ", $_POST['hobbies']);  // Convert array to string
$country  = $_POST['country'];
$message  = $_POST['message'];

$sql = "INSERT INTO users (name, email, password, gender, hobbies, country, message)
        VALUES ('$name', '$email', '$password', '$gender', '$hobbies', '$country', '$message')";

if ($conn->query($sql) === TRUE) {
    echo "Data saved successfully! <a href='display.php'>View All Entries</a>";
} else {
    echo "Error: " . $conn->error;
}
$conn->close();
?>
