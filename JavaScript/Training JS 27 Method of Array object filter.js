//  Task:
/*
Coding in function countGrade. function accept 1 parameters scores, it's a number array. Your task is to 
count the grade distribution of the scores, 
to return an object like this: {S:888, A:888, B:888, C:888, D:888, X:888}

Grade S: Full marks(score=100)
Grade A: score<100 and score>=90
Grade B: score<90 and score>=80
Grade C: score<80 and score>=60
Grade D: score<60 and score>=0
Grade X: score=-1(The cheating guy gets a score like that)

Example:
countGrade([50,60,70,80,90,100]) should return {S:1, A:1, B:1, C:2, D:1, X:0}
countGrade([65,75,,85,85,95,100,100]) should return {S:2, A:1, B:2, C:2, D:0, X:0}
countGrade([-1,-1,-1,-1,-1,-1]) should return {S:0, A:0, B:0, C:0, D:0, X:6}
*/

function countGrade(scores){
    //coding here...
    let S = scores.filter(ele => ele === 100);
    let A = scores.filter(ele => ele < 100 && ele >= 90);
    let B = scores.filter(ele => ele < 90 && ele >= 80);
    let C = scores.filter(ele => ele < 80 && ele >= 60);
    let D = scores.filter(ele => ele < 60 && ele >= 0);
    let X = scores.filter(ele => ele < 0);
    return {
      S : S.length,
      A : A.length,
      B : B.length,
      C : C.length,
      D : D.length,
      X : X.length
    }
}

countGrade([50,60,70,80,90,100]);
countGrade([65,75,,85,85,95,100,100]);
countGrade([-1,-1,-1,-1,-1,-1]);