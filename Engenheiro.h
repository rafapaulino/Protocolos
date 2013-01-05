//
//  Engenheiro.h
//  Protocolos
//
//  Created by Rafael Brigagão Paulino on 23/08/12.
//  Copyright (c) 2012 Rafael Brigagão Paulino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pessoa.h"

//temos a classe engenheiro protocolada como churraqueiro, assim ela deve implementar os metodos definidos no @protocol na classe Pessoa
@interface Engenheiro : Pessoa <Churrasqueiro>

@end
