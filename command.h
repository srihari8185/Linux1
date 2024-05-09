    1  sudo apt update
    2  sudo nano /etc/resolv.conf 
    3  sudo apt update
    4  sudo apt upgrade
    5  sudo apt install gcc++
    6  sudo apt install gcc
    7  sudo apt install build-essentials
    8  sudo apt install build-essential
    9  sudo apt install gdb
   10  init 0
   11  gcc --version
   12  cd "/home/rps/Desktop/C Demo/" && gcc first.c -o first && "/home/rps/Desktop/C Demo/"first
   13  sudo su
   14  tar xvfz node_exporter-1.7.0.linux-amd64.tar.gz 
   15  cd node_exporter-1.7.0.linux-amd64/
   16  sudo mv node_exporter /usr/local/bin/
   17  sudo tee /etc/systemd/system/node_exporter.service<<EOF
   18  [Unit]
   19  Description=Node Exporter
   20  After=network.target
   21   
   22  [Service]
   23  User=rps
   24  Group=rps
   25  Type=simple
   26  ExecStart=/usr/local/bin/node_exporter
   27   
   28  [Install]
   29  WantedBy=multi-user.target
   30  EOF
   31  sudo systemctl daemon-reload
   32  sudo systemctl start node_exporter
   33  sudo systemctl enable node_exporter
   34  sudo systemctl status node_exporter
   35  sudo apt install gcc
   36  sudo apt install git
   37  sudo apt install make
   38  sudo apt install vim
   39  sudo apt install g++
   40  sudo apt install gedit
   41  sudo apt install cmake
   42  sudo apt install g++
   43  cd
   44  sudo apt update -y
   45  sudo apt install mysql-server
   46  sudo systemctl status mysql.service 
   47  sudo mysql
   48  sudo mysql_secure_installation
   49  sudo mysql
   50  sudo mysql_secure_installation
   51  sudo mysql -u root -p
   52  sudo snap install mysql-workbench-community
   53  man
   54  ls
   55  man man
   56  man ls
   57  man man
   58  man ls
   59  man man
   60  man ls
   61  man man
   62  man -a intro
   63  man -a intro man
   64  man man
   65  whatis man
   66  help
   67  help ls
   68  man -k ls
   69  man -k man
   70  man ?
   71  man -k cd
   72  man cd 
   73  man cd
   74  man man
   75  man man.7
   76  man 'man(7)'
   77  man -a
   78  man -a sleep
   79  man ls(7)
   80  man man.7
   81  q
   82  mkdir test
   83  ls
   84  rmdir test
   85  mkdir test
   86  ls
   87  cd desktop
   88  cd
   89  ls
   90  cd Desktop
   91  mkdir test
   92  ls
   93  rmdir test
   94  ls
   95  mkdir file1
   96  cd Desktop
   97  ls
   98  mkdir file1
   99  ls
  100  rmdir file1
  101  ls
  102  cd Downloads
  103  cd ..
  104  cd Documents
  105  ls
  106  cd ..
  107  cd Downloads
  108  ls
  109  mv node_exporter-1.7.0.linux-amd64 /linux.pdf/Desktop
  110  mv /node/linux.pdf ~/Desktop
  111  cd node
  112  mv /node/linux.pdf ~/Desktop
  113  mv linux.pdf ~/Desktop
  114  cd ..
  115  cd node 1
  116  cd node1
  117  cd node
  118  ls
  119  cd ..
  120  cd linux.pdf
  121  cd node
  122  mv linux.pdf ~/Desktop
  123  ls
  124  mv linuxpdf ~/Desktop
  125  cd ..
  126  su
  127  ~sudo -i
  128  sudo -i
  129  su - hari
  130  su -hari
  131  exit
  132  cd ..
  133  su -
  134  exit
  135  cd ..
  136  cd Desktop
  137  cd ..
  138  cd Downloads
  139  cd node
  140  mv linuxpdf ~/Desktop
  141  cd ..
  142  cd Desktop
  143  mkdir file
  144  cd ..
  145  cd Downloads
  146  cd node
  147  mv linuxpdf ~/Desktop
  148  pwd
  149  mv /home/rps/Downloads/node
  150  mv /home/rps/Downloads/node file
  151  cd Desktop
  152  mkdir file1
  153  cd file1
  154  touch first second third
  155  cat > first
  156  cd ..
  157  vi first
  158  vi second
  159  cd file1
  160  vi first
  161  vi second
  162  vi third
  163  touch mainfile
  164  cat first second third >> mainfile
  165  ls
  166  vi mainfile
  167  vi first
  168  vi mainfile
  169  cat first second third >> mainfile
  170  ls
  171  vi mainfile
  172  vi second
  173  vi mainfile
  174  cat first second third >> mainfile
  175  ls
  176  vi mainfile
  177  cd Desktop
  178  cd ..
  179  cp file1 ~/rps/Downloads
  180  cp -r file1 ~/Downloads
  181  ls
  182  cd ..
  183  cd Downloads
  184  ls
  185  whoami
  186  pwd
  187  su - hari
  188  clear
  189  whoami
  190  pwd
  191  man
  192  man man
  193  ls
  194  cd 
  195  history
  196  clear
  197  man man
  198  ls
  199  cd fruits
  200  mkdir fruits
  201  cd fruits
  202  cd ..
  203  pwd
  204  mv fruits healthy
  205  ls
  206  touch grapes
  207  touch apple
  208  mv grapes apple healthy
  209  ls
  210  cp -r healthy good
  211  ls
  212  touch grapes
  213  gzip grapes
  214  touch apple
  215  cat >>apple
  216  wc apple
  217  ls
  218  grep
  219  ~sort apple
  220  ~sort -r apple
  221  echo "good morning" >> apple
  222  ls
  223  ./a.out
  224  open <apple>
  225  whoami
  226  su
  227  sudo
  228  passwd
  229  vi --help
  230  clear
  231  vi file.txt
  232  history
  233  clear
  234  history
  235  clear
  236  man ifconfig
  237  man man
  238  ifconfig ethx xxx.
  239  sudo apt install net-tools
  240  man ifconfig
  241  root -n
  242  man ifconfig
  243  route -n
  244  cd Downloads
  245  cd file1 
  246  ls -l file1
  247  cd ..
  248  file 1
  249  cd file 1
  250  cd file1
  251  ls -l file 1
  252  cd ..
  253  cd file1.txt
  254  ls -l file1.txt
  255  cd ..
  256  cd f1
  257  cd file1
  258  cd file.txt
  259  ls -la file.txt
  260  vifile
  261  vi file
  262  vi file1
  263  id
  264  su -
  265  sudo apt-get update
  266  cd ..
  267  sudo apt-get upgraded
  268  upgraded
  269  sudo apt-get upgrade
  270  clear
  271  Initialized empty git repository in /home/rps/.git/
  272  git init
  273  cd rps
  274  ls
  275  git add
  276  cd /home
  277  ls
  278  cd rps
  279  ls
  280  git add
  281  git init
  282  git add.
  283  git add
  284  git add .
  285  git commit
  286  git config --global user.email "harisri8185@gmail.com"
  287  cd ..
  288  cd..
  289  cd ..
  290  history

