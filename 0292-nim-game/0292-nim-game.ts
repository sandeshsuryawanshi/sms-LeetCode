function canWinNim(n: number): boolean {
      
        let r:number=n%4;
    
       if(r>=1 && r<=3) return true;
    
    return false;

};