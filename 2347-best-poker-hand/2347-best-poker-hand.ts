function bestHand(ranks: number[], suits: string[]): string 
{
       if(new Set(suits).size===1) return "Flush";
    
         let mp=new Map();
    
         let mx=0;
         for(let i=0;i<ranks.length;i++)
        {
            mp.set(ranks[i],(mp.get(ranks[i])||0)+1)
            mx= Math.max(mx,mp.get(ranks[i]));
        }
       if(mx>=3)
           {
               return "Three of a Kind";
           }
      if(mx==2)
          {
              return "Pair";
          }
      return "High Card"
};