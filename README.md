<h1>File Copy Utility</h1>
This C++ program is designed to facilitate the copying of files and directories. It allows you to specify a source file that contains the locations of the files to be copied and a destination location where the files will be copied to. Additionally, you have the option to add a prefix to the file locations.
  <h2>Features</h2>
  <ul>
    <li>Copies files and directories based on the provided source file.</li>
    <li>Supports adding a prefix to the file locations for easy organization and retrieval.</li>
    <li>Creates necessary directories in the destination path if they don't exist.</li>
    <li>Provides informative console output, indicating the progress of the file copying process.</li>
  </ul>

  <h2>How to Use</h2>
  <ol>
    <li>Clone or download the repository to your local machine.</li>
    <li>Compile the program using a C++ compiler.</li>
    <li>Run the compiled executable.</li>
    <li>When prompted, follow the instructions below:</li>
  </ol>
  <ul>
    <li><strong>File from which we retrieve the file locations:</strong> Enter the path of the file that contains the locations of the files to be copied.</li>
    <li><strong>Add a prefix to the file locations? (y/n):</strong> Choose whether to add a prefix to the file locations. Enter 'y' for yes or 'n' for no.</li>
    <li><strong>Enter the prefix (if applicable):</strong> If you chose to add a prefix, enter the desired prefix. Otherwise, you can leave it blank.</li>
    <li><strong>Destination location:</strong> Enter the destination location where the files will be copied to.</li>
  </ul>
  <p>Sit back and let the program copy the files for you.</p>
  <p>Once the copying process is complete, the program will display a message indicating the successful file copy.</p>

  <h2>Example</h2>
  <p>Suppose you have a file called <code>filelist.txt</code> that contains the following file locations:</p>
  <pre>
    file1.txt
    file2.txt
    dir1/file3.txt
  </pre>
  <p>You want to copy these files to the destination folder <code>C:\Destination</code>. Additionally, you want to specify a prefix, let's say <code>C:\Source</code>, from where you can find these files easily.</p>
  <p>Here's how you would use the File Copy Utility:</p>
  <ol>
    <li>Compile and run the program.</li>
    <li>Enter the source file path: <code>filelist.txt</code>.</li>
    <li>Choose to add a prefix: Enter <code>y</code>.</li>
    <li>Enter the prefix: <code>C:\Source</code>.</li>
    <li>Enter the destination location: <code>C:\Destination</code>.</li>
  </ol>
  <p>The program will create the necessary directories and copy the files as follows:</p>
  <ul>
    <li><code>file1.txt</code> will be copied to <code>C:\Destination\file1.txt</code>.</li>
    <li><code>file2.txt</code> will be copied to <code>C:\Destination\file2.txt</code>.</li>
    <li><code>dir1/file3.txt</code> will be copied to <code>C:\Destination\dir1\file3.txt</code>.</li>
  </ul>
  <p>After the copying process is complete, the program will display a message indicating the successful file copy.</p>

  <p>Note: Make sure to provide the correct file paths and ensure that you have the necessary permissions to read the source file and write to the destination location.</p>

  <h2>License</h2>
  <p>This project is licensed under the <a href="#">MIT License</a>.</p>

  <p>Feel free to contribute, report issues, or submit pull requests to help improve this file copy utility.</p>
