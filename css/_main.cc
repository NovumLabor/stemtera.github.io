@import url('https://fonts.googleapis.com/css?family=Open+Sans: 400,600');
html { 
	color: #333;
    font-family: 'Open Sans', sans-serif;
}

body { 
	font-size: 1.1vw; 
} 

h1 { 
	font-size: 2.7vw;
    color: #f86d22;
    text-shadow: 2px 2px 2px #bbbbbb;
} 

h2 { 
	font-size: 1.8vw; 
} 

span.titlenumber {
    color: #f86d22;
}

h3 { 
	font-size: 1.5vw; 
} 

h4 {
	font-size: 1.2vw;
	font-style: italic;
}

h1,h2,h3,h4{
	margin-top: 0.7vw;
	margin-bottom: 0.7vw;
}

p {
	margin-top: 2vh;
	margin-bottom: 3vh;
    overflow: auto;
    max-height: 100%
}

p.no-overflow {
    overflow: hidden;
}

img {
    /* border: 1px solid #333; */
	margin-top: 0vh;
	margin-bottom: 0vh;
	margin-left: 1vw;
	margin-right: 1vw;
}

.center {
	display: block;
    margin-left: auto;
    margin-right: auto;
}

img.left {
	float: left;
}

img.right {
	margin-left: auto;
	margin-right: 1vw;
	float: right;
}

img.full-w {
    width: 91vw;
}

img.three-quarter-w-w {
    width: 78vw;
}

img.three-quarter-w {
	width: 60vw;
}

img.half-w{
	width: 42vw;
}

img.quarter-w-w {
	width: 31vw;
}

img.quarter-w {
	width: 22vw;
}

img.eighth-w-w {
    width: 16vw;
}

img.eighth-w {
	width: 12vw;
}

img.sixteenth-w {
	width: 6vw;
}

img.sixteenth-w-w {
    width: 2vw;
}

img.full-h {
    /* border: 1px solid #00ff00; */
	max-height: 100%;
    max-width: 100%;
    height: 88vh; 
}

img.three-quarter-h-h {
    height: 76vh;
}

img.three-quarter-h {
	height: 60vh;
}

img.half-h{
	height: 45vh;
}

img.quarter-h-h {
    height: 32vh;
}

img.quarter-h {
	height: 23vh;
}

img.eighth-h {
	height: 12vh;
}

img.sixteenth-h {
	height: 6vh;
}
img.textimg {
    height: 1vw;
    /* margin-bottom: -0.4vw; */
}

.common-parts {
    border: 5px solid #aaa;
    width: 20vw;
}

img.schematic {
    width: 22vw;
    max-height: 30vh;
    border: 1px solid #ddd;
    border-radius: 4px;
    padding: 0.2vw;
    box-shadow: 0 4px 8px 0 rgba(0, 0, 0, 0.2), 0 6px 20px 0 rgba(0, 0, 0, 0.19);
    margin-left:0;
}

img.breadboard {
    width: auto;
    max-width: 40vw;
    height: 90vh;
    margin:0;
}

div {
    /* border: 1px solid #f00; */
	height: 95vh;
	margin-left: 1vw;
	margin-right: 1vw;
    -webkit-column-count: 1; /* Chrome, Safari, Opera */
    -moz-column-count: 1; /* Firefox */
    column-count: 1;
}

div.fullpage {
    height: 95vh;
}

div.titlepage {
  page: blank;
}

div.three-col-page {
    -webkit-column-count: 3; /* Chrome, Safari, Opera */
    -moz-column-count: 3; /* Firefox */
    column-count: 3;
    -webkit-column-gap: 2vw; /* Chrome, Safari, Opera */
    -moz-column-gap: 2vw; /* Firefox */
    column-gap: 2vw;
}

div.two-col-page {
    -webkit-column-count: 2; /* Chrome, Safari, Opera */
    -moz-column-count: 2; /* Firefox */
    column-count: 2;
    -webkit-column-gap: 2.5vw; /* Chrome, Safari, Opera */
    -moz-column-gap: 2.5vw; /* Firefox */
    column-gap: 2.5vw;
}

div.one-col-third-page {
    height: 33vh;
}

div.two-col-third-page {
    -webkit-column-count: 2; /* Chrome, Safari, Opera */
    -moz-column-count: 2; /* Firefox */
    column-count: 2;
    -webkit-column-gap: 2.5vw; /* Chrome, Safari, Opera */
    -moz-column-gap: 2.5vw; /* Firefox */
    column-gap: 2.5vw;
	height: 33vh;
}

div.two-col-two-third-page {
    -webkit-column-count: 1; /* Chrome, Safari, Opera */
    -moz-column-count: 1; /* Firefox */
    column-count: 1;
	height: 66vh;
}

div.part-title {
    margin-top: 0;
    margin-left: 0;
    margin-right: 0;
    margin-bottom: 1vw;
    float:left; 
    max-height: 20vh;
}

div.part-title img {
    margin: 0;
    width: 1.2vw; 
    max-height: 10vh;
}


div.schematic-title {
    margin-top: 0;
    margin-left: 0;
    margin-right: 0;
    margin-bottom: 1vw;
    float:left;
    max-height: 20vh;
}


div.schematic-title img {
    margin: 0;
    width: 1.2vw; 
    max-height: 16vh;
}

div.parts-container {
    /* background-color: #eee; */
    max-height: 12vh;
    margin-top: 2vh;
    margin-left: 0; 
}

div.schematic-container {
    float: left;
    margin-top: 2vh;
    max-height: 35vh;
    margin-left: 0;
}


div.breadboard-container {
    max-height: 90vh;
    height: 90vh;
    margin-top: 0;
    margin-left: 0;
    -webkit-column-break-inside: avoid; /* Chrome, Safari, Opera */
    page-break-inside: avoid; /* Firefox */
    break-inside: avoid; /* IE 10+ */
    display: inline-block;
}

div.part {
    border: 2px solid #aaa;
    margin: 0vw;
    float:left;
    max-height: 10.5vh;
}

div.part img {
    margin-top: 0.2vw;
    width: 5.7vw;
    max-height: 10vh;
}

div.partdesc {
    text-align: right;
    max-height: 1.5vw;
}

.left {
    float: left;
}

.qty {
    margin-left: -1.5vw;
    margin-right: 0.5vw;
}

.toc-title {
    -webkit-column-count: 1; /* Chrome, Safari, Opera */
    -moz-column-count: 1; /* Firefox */
    column-count: 1;
    height: 20vh;
    /* border: 1px solid #000; */
    text-align: center;
    vertical-align: middle;
}

.toc-title p {
    margin-top: 0.5vh;
    margin-bottom: 0.5vh;
}


.toc-content {
    height: 74vh;
    /* border: 1px solid #000; */
    -webkit-column-count: 2; /* Chrome, Safari, Opera */
    -moz-column-count: 2; /* Firefox */
    column-count: 2;
    -webkit-column-gap: 2.5vw; /* Chrome, Safari, Opera */
    -moz-column-gap: 2.5vw; /* Firefox */
    column-gap: 2.5vw;
}

.toc a:hover, .toc a:visited, .toc a:link, .toc a:active
{
    text-decoration: none;
    color: inherit;
}

.preface {
    text-align: center;
    font-size: 0.8vw;
    margin-top: 60vh;
    margin-right: auto;
    margin-left: auto;
    width: 35vw;
}

@media screen {
    .page-break { 
        border-style: dashed hidden hidden hidden;
        border-width: 1px;
        border-color: #aaa;
        height: 2.1vw; 
        margin-bottom:13px;
    }

    .page-break:after {
        content: "\f107";
        font-family: FontAwesome;
        text-decoration: none;
        z-index: 1;
        display: block;
        text-align: center;
        font-size: 2vmin;
        margin-top: -1.5vh;
    }
    .footer { 
        /* border: 1px dotted #000; */
        height: 7vh; 
        font-size: 0.6vw; 
        margin-top: -8vh;
        text-align: right;
    }
}

@media print {
    * {margin: 0;}
    .page-break { height:0; page-break-after:always; margin:0 !important; border-top:none; }
    .footer { display : none; }
    @page { size: A5 landscape; margin: 10mm 5mm 10mm 5mm; }
    html, body {height: 99%;}
    div { 
        height: 98%;
    }
    p {
        max-height: 100%;
    }
}

blockquote {
font-family: Georgia, serif;
font-style: italic;
width: 70%;
margin: 3vh 0 1vh 3vw;
padding: 0.5vh 2vw;
line-height: 1.45;
position: relative;
color: #383838;
}

blockquote:before {
display: block;
padding-left: 0.5vw;
content: "\201C";
font-size: 5vw;
position: absolute;
left: -1vw;
top: -1vw;
color: #7a7a7a;
}

blockquote cite {
color: #999999;
font-size: 0.6vw;
display: block;
margin-top: 0.5vh;
text-align: right;
}
 
blockquote cite:before {
content: "\2014 \2009";
}

ul {
    list-style: none;
    padding: 0.8vw;
    margin:0;
}

li { 
    padding-left: 2em; 
    text-indent: -1.1em;
}

li:before {
    content: "\f111";
    font-size: 0.7vw;
    font-family: FontAwesome;
    color: #f86d22; 
    margin-right: 1em;
}

.info, .success, .warning, .error, .browser, .keyboard, .redblock, .blueblock, .greenblock, .blackblock, .orangeblock {
    padding:10px;
    margin:10px 0;
}

.info:before, .success:before, .warning:before, .error:before, .browser:before, .keyboard:before, .mouse:before {
    font-family:FontAwesome;
    font-style:normal;
    font-weight:400;
    speak:none;
    display:inline-block;
    text-decoration:inherit;
    width:1em;
    margin-right:.8em;
    text-align:center;
    font-variant:normal;
    text-transform:none;
    line-height: 3vh;
    height: 3vh;
    margin-left:.2em;
    -webkit-font-smoothing:antialiased;
    -moz-osx-font-smoothing:grayscale
}

.info:before {
    content:"\f05a";
}
.success:before {
    content:'\f00c';
}
.warning:before {
    content:'\f071';
}
.error:before {
    content:'\f057';
}
.browser:before {
    content:'\f0ac';
}
.keyboard:before {
    content:'\f11c';
}
.mouse:before {
    content: '\f245';
}
.info {
    color: #00529B;
    background-color: #BDE5F8;
}
.success {
    color: #068106;
    background-color: #DFF2BF;
}
.warning {
    color: #9F6000;
    background-color: #FEEFB3;
}
.error {
    color: #D8000C;
    background-color: #FFBABA;
}
.browser {
    background-color: #e5e5e5;
    border-radius: 0.3vh;
}
.browser a:hover, .browser a:visited, .browser a:link, .browser a:active
{
    text-decoration: none;
    color: inherit;
}

.redblock, .blueblock, .greenblock, .blackblock, .orangeblock {
    padding: 0.1vh;
    font-weight: bold;
}
.backhigh {
    background-color: #a0e8f6;
    color: #000;
}
.greenblock {
    background-color: #00ff00;
    color: #000;
}
.redblock {
    background-color: #ff0000;
    color: #dddddd;
}
.blueblock {
    background-color: #0000ff;
    color: #dddddd;    
}
.blackblock {
    background-color: #000000;
    color: #dddddd;
}
.orangeblock {
    background-color: #f86d22;
    color: #eeeeee;
}

