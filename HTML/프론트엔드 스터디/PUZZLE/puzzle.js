var body;
var randNumArr = new Array();
var size = 16;
var cells;
setRandNumArr = function(){
    for(var i = 0; i < size;){
        //console.log(randNumArr[i] == undefined); 이면 숫자를 넣어라
        var idx = Math.floor(Math.random()*size);
        if(randNumArr[idx]==undefined){
            randNumArr[idx] = String.fromCharCode(i%8 + 65);
            i++ //입력이 성공할 경우에만 증가함
        }
    }
};

function init(){
    body = document.getElementsByTagName("body")[0]; //컬렉션으로 들어오기 때문에 0번지라고 붙어줘야한다.
    var heading = document.createElement("h1");
    heading.innerText = "짝 맞추기 게임";
    body.appendChild(heading);
    var puzzle = document.createElement("div");
    puzzle.id = 'puzzle';
    body.appendChild(puzzle);

    setRandNumArr();

    for(var i = 0; i<size; i++){
        var cell = document.createElement("div");
        cell.className = "cell";
        cell.id = "cell" + randNumArr[i];
        cell.innerText = randNumArr[i];
        cell.code = randNumArr[i] //숨겨진 코드
        puzzle.appendChild(cell);
    }
};

function compare(){
    alert("게임 시작");
    /*
    1. 첫 번째 셀을 클릭
        같은 셀을 또 클릭했나?
        첫번째 셀을 임시로 저장
    2. 두 번째 셀을 클릭
        임시 공간의 첫 번째 셀의 값과 비교
    3. 첫 번째 셀, 두 번째 셀을 비교
        같은 셀이면 배경색 비교
        다른 셀이면 다시 감춤
    4. 비교 후 처리
        임시공간 초기화
    */

    var tmp = null;

    for(var i = 0; i<cells.length; i++){
        //onclick 초기화
        cells[i].onclick = function(){
            this.innerText = this.code;
            this.style.background = "yellow";
            if(tmp == null){
                //alert("처음 클릭");
                tmp = this; //여기서 this는 해당 셀 자체
                tmp.st
            }
            else{
                //두 번째 클릭했을 때 tmp와 this랑 같은지 비교
                if(tmp == this){
                    alert("같은 셀을 클릭했습니다.");
                    return;
                }
                //alert("두 번째 클릭");
                if(tmp.code == this.code){
                    //alert("정답");
                }
                else{
                    alert("같지 않습니다.");

                    tmp.innerText = "";
                    this.innnerText = "";
                    tmp.style.background = "";
                    this.style.background = "";
                }
                tmp = null; 
            }
        }
    }


}

function start(){
    var message = document.createElement('p');
    message.innerText = "5초 후에 게임이 시작합니다!";
    body.appendChild(message);
    var sec = 5;

    var fn = setInterval(function(){
        sec--;
        message.innerText = sec + "초 후에 게임이 시작됩니다.";
        if(sec == 0){
            message.innerText = "같은 알파벳 위치를 찾으세요";
            clearInterval(fn);
        }
    }, 1000);

    setTimeout(function(){
        cells = document.getElementById('puzzle').getElementsByTagName("div");
        for(var i = 0; i <size; i++){
            cells[i].innerText = "";
        }

        //비교 시작
        compare();

    }, 5000);
}

function main(){
    init();
    start();
}

window.onload = main;