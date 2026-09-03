Export["ETUsers.csv", 
 Flatten[StringCases[#, 
      "style\">" ~~ x__ ~~ "</a></b>" :> 
       StringRiffle@
        StringCases[RemoveDiacritics@x, 
         CharacterRange["A", "z"] ..]] & /@ 
    StringSplit[
     Import["https://einsteintoolkit.org/about/members", "TEXT"], 
     "\n"] /. {} -> Nothing]]