<?php
$conn = new mysqli("localhost", "root", "", "formdb");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$result = $conn->query("SELECT * FROM users");

echo "<h2>Submitted Users</h2>";
echo "<table border='1' cellpadding='10'>";
echo "<tr><th>ID</th><th>Name</th><th>Email</th><th>Gender</th><th>Hobbies</th><th>Country</th><th>Message</th></tr>";

while ($row = $result->fetch_assoc()) {
    echo "<tr>";
    echo "<td>".$row['id']."</td>";
    echo "<td>".$row['name']."</td>";
    echo "<td>".$row['email']."</td>";
    echo "<td>".$row['gender']."</td>";
    echo "<td>".$row['hobbies']."</td>";
    echo "<td>".$row['country']."</td>";
    echo "<td>".$row['message']."</td>";
    echo "</tr>";
}

echo "</table>";

$conn->close();
?>
