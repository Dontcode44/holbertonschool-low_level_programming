<p><img src="https://media-exp1.licdn.com/dms/image/C4E12AQFjFXQvGw3NGg/article-cover_image-shrink_720_1280/0/1652761696946?e=1658361600&v=beta&t=7pS0YSvrF5FJTMn3vHLt-x_hgZ2W4q5zsf_DADZ6z1I" alt="">&nbsp;</p>
<h2><strong><em>Why using libraries in general</em></strong></h2>
<p>As most agree, the C standard library (also known as stdio.h) is a collection of header files and routine libraries, standardized by a committee of the International Organization for Standardization (ISO), that implement operations common, such as input and output. or chain management. Unlike other languages like COBOL, Fortran, or PL/1, C does not include keywords for these tasks, so virtually all programs implemented in C depend on the standard library to function.</p>
<p><br></p>
<h3><em>How do they work</em></h3>
<p>Along with the C and C++ compilers, certain files called libraries, usually libraries, are included. Libraries contain the object code for many programs that allow you to do common things, such as read the keyboard, write on the screen, manipulate numbers, perform mathematical functions, and so on.</p>
<h3><em>How to create them</em></h3>
<p>Dynamic library files are created using the gcc command, adding &quot;-c&quot; as a flag. What it does is generate the .o files and from them create source files of the .c</p>
<p>Using &quot;-fPIC&quot; causes the code, regardless of where it is, to execute it. The &quot;-c&quot; flag causes each .o file to be linked</p>
<div>
    <div>
        <div><img src="https://media-exp1.licdn.com/dms/image/C4E12AQFvrWTxKwiwnA/article-inline_image-shrink_1500_2232/0/1652764683341?e=1658361600&v=beta&t=3dvP6ijHrP8CrKVqZFApH_haOU_0q61Y7tTn_JLul5U" alt="No hay texto alternativo para esta imagen"></div>
    </div>
</div>
<p>The list of files to compile is shown and you have to take into account the &quot;main.h&quot; that includes each of the prototypes</p>
